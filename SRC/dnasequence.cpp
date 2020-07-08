//
// Created by a on 7/6/20.
//
#include "dnasequence.h"



bool DnaSequence::IsValidDna(const char* dnaSequence)
{
    for (int i = 0; i < strlen(dnaSequence); ++i) {
        if(dnaSequence[i] != 'A'&&dnaSequence[i] != 'C'&&dnaSequence[i] != 'T'&&dnaSequence[i] != 'G')
            return false;
    }
    return true;
}
bool DnaSequence::Nucleotide::IsValidChar(const char c)
{
    return !(c != 'A'&& c != 'C'&& c != 'T'&& c != 'G');
}
DnaSequence::Nucleotide& DnaSequence::Nucleotide::operator=(const Nucleotide& nucleotide)
{
    m_c = nucleotide.m_c;
    return *this;
}
DnaSequence::Nucleotide& DnaSequence::Nucleotide::operator=(const char c)
{
    try
    {
        if(!IsValidChar(c))
            throw std::invalid_argument("invalid argument");
    }
    catch(std::invalid_argument& e)
    {
        std::cout<<"Exception!"<<e.what()<<std::endl;
    }
    m_c = c;
    return *this;
}

DnaSequence::Nucleotide* DnaSequence::InitDna(const char* dnaSequence)
{
    try
    {
        if(!IsValidDna(dnaSequence))
            throw std::invalid_argument("it is not a DNA");
    }
    catch(std::invalid_argument& e)
    {
        std::cout<<"Exception!"<<e.what()<<std::endl;
        throw ;
    }
    char* dna = strcpy(new char[strlen(dnaSequence)+1],dnaSequence);
    return (Nucleotide*)dna;


}

DnaSequence::DnaSequence(const char* dnaSequence):m_data(InitDna(dnaSequence)),
                                                  m_length(strlen(dnaSequence)){}

DnaSequence::DnaSequence(const std::string& dnaSequence):m_data(InitDna(dnaSequence.c_str())),
                                                         m_length(dnaSequence.length()){}

DnaSequence::DnaSequence(const size_t size){
    char* temp = new char[size];
    m_data = (Nucleotide*)temp;
    m_length = size;
}
DnaSequence::DnaSequence(std::fstream my_file)
{
    std::string TempDna;
    my_file.exceptions ( std::fstream::failbit | std::fstream::badbit );
    try
    {
        my_file.open ("my_DNA.txt");
        while (!my_file.eof())
        {
            getline(my_file, TempDna);
            DnaSequence dnaSequence(TempDna.c_str());
            my_file<<"Data: "<<dnaSequence.GetData();
            my_file<<"Length: "<<dnaSequence.length();
        }
        my_file.close();
    }
    catch (std::fstream::failure& e)
    {
        std::cerr << "Exception opening/reading/closing file\n";
    }


}
DnaSequence& DnaSequence::operator=(const DnaSequence& dnaSequence) {
    if (this == &dnaSequence)
        return *this;
    delete[] m_data;
    m_data = InitDna((char*)(dnaSequence.m_data));
    m_length = dnaSequence.m_length;
    return *this;
}

DnaSequence::DnaSequence(const DnaSequence& dnaSequence):
        m_data(InitDna((char*)(dnaSequence.m_data))),m_length(dnaSequence.m_length){}


size_t DnaSequence::length()const
{
    return m_length;
}
DnaSequence DnaSequence::slice(size_t start, size_t end)const
{
    DnaSequence dnaSequence(end-start-1);
    for(size_t i = 0; i < dnaSequence.length() ; i++){
        (dnaSequence.m_data)[i] = m_data[start+i+1];
    }
    return dnaSequence;

}
char DnaSequence::Nucleotide::PiarOfNucleotide()
{

    if(GetC() == 'C')
        return 'A';
    else if(GetC() == 'A')
        return 'C';
    else if(GetC() == 'G')
        return 'T';
    else if(GetC() == 'T')
        return 'G';

}
DnaSequence DnaSequence::Pairing()
{
    DnaSequence NewDnaSequence(m_length);
    for (int i = 0; i < m_length; ++i)
    {
        (NewDnaSequence.m_data)[m_length-i-1] = m_data[i].PiarOfNucleotide();
    }
    return NewDnaSequence;
}
long DnaSequence::find(const DnaSequence& subDnaSequence,long Index)
{

    const char* result = strstr(GetData()+Index,subDnaSequence.GetData());
    if(!result)
        return -1;
    return (result-GetData());

}
long DnaSequence::Count(const DnaSequence& subDnaSequence)
{

    long counter = 0;
    for (long Index = find(subDnaSequence); Index != -1 && Index + subDnaSequence.length() <= length();
         Index = find(subDnaSequence, Index + subDnaSequence.length()))
    {
        ++counter;
    }
    return counter;

}
std::list<long> DnaSequence::FindAll(const DnaSequence& subDnaSequence)
{
    std::list<long> indexes;
    for (long Index = find(subDnaSequence); Index != -1 && Index + subDnaSequence.length() <= length();
         Index = find(subDnaSequence, Index + subDnaSequence.length()))
    {
        indexes.push_back(Index);
    }
    return indexes;
}
std::list<DnaSequence> DnaSequence::FindConsensus()
{

    long indexTAG,indexTAA,indexTGA;
    std::list<long > indexes = FindAll("ATG");
    std::list<DnaSequence> Consensus;
    for (std::list<long>::iterator it = indexes.begin(); it != indexes.end(); ++it) {
        indexTAG = find("TAG", *it);
        indexTAA = find("TAA", *it);
        indexTGA = find("TGA", *it);
        if (indexTAG != -1 && (indexTAG - *it - 3)% 3 == 0)
            Consensus.push_back(slice(*it - 1, indexTAG + 3));
        if (indexTAA != -1 && (indexTAA - *it - 3) % 3 == 0)
            Consensus.push_back(slice(*it - 1, indexTAA + 3));
        if (indexTGA != -1 && (indexTGA - *it - 3)% 3 == 0)
            Consensus.push_back(slice(*it - 1, indexTGA + 3));
    }


    return Consensus;
}
std::ostream& operator<<(std::ostream& os, const DnaSequence& dnaSequence)
{
    return os<<dnaSequence.GetData()<<std::endl;
}

const char* DnaSequence::GetData()const
{
    return (char*)m_data;
}

DnaSequence::Nucleotide& DnaSequence::operator[](size_t index) const
{
    try
    {
        if (index >= m_length || index < 0)
            throw std::invalid_argument("not valid index");
    }
    catch(std::invalid_argument& e)
    {
        std::cout<<"Exception!"<<e.what()<<std::endl;
    }
    return m_data[index];

}
DnaSequence::~DnaSequence()
{
    delete[] m_data;
}
bool operator==(const DnaSequence& dnaSequence1, const DnaSequence& dnaSequence2)
{
    return strcmp(dnaSequence1.GetData(), dnaSequence2.GetData()) == 0;
}
bool operator!=(const DnaSequence& dnaSequence1, const DnaSequence& dnaSequence2)
{
    return !(dnaSequence1 == dnaSequence2);
}





