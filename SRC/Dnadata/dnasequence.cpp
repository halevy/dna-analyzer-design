//
// Created by a on 7/6/20.
//
#include "dnasequence.h"



bool DnaSequence::IsValidDna(const char* dnaSequence)
{
    for (int i = 0; i < strlen(dnaSequence); ++i) {

        if(!Nucleotide::IsValidChar(dnaSequence[i]))
            return false;
    }
    return true;
}
bool DnaSequence::Nucleotide::IsValidChar(char c)
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
    if(!IsValidChar(c) && c != '\0')
        throw std::invalid_argument("invalid letter");

    m_c = c;
    return *this;
}

DnaSequence::Nucleotide* DnaSequence::InitDna(const char* dnaSequence)
{
    if(!IsValidDna(dnaSequence))
        throw std::invalid_argument("It is not a DNA");

    Nucleotide* dnaSequence_ = new Nucleotide[strlen(dnaSequence)+1];
    size_t i;

    for(i = 0;i < strlen(dnaSequence); ++i){
        dnaSequence_[i] = dnaSequence[i];
    }

    dnaSequence_[i] = '\0';

    return dnaSequence_;

}

DnaSequence::DnaSequence(const char* dnaSequence):m_data(InitDna(dnaSequence)),
                                                  m_length(strlen(dnaSequence)){}

DnaSequence::DnaSequence(const std::string& dnaSequence):m_data(InitDna(dnaSequence.c_str())),
                                                         m_length(dnaSequence.length()){}

DnaSequence::DnaSequence(const size_t size){

    m_data = new Nucleotide[size + 1];
    m_length = size;
}

DnaSequence& DnaSequence::operator=(const DnaSequence& dnaSequence) {

    if (this == &dnaSequence)
        return *this;

    delete[] m_data;
    m_data = InitDna(dnaSequence.GetData());
    m_length = dnaSequence.m_length;
    return *this;
}

DnaSequence::DnaSequence(const DnaSequence& dnaSequence):
        m_data(InitDna(dnaSequence.GetData())),m_length(dnaSequence.m_length){}


size_t DnaSequence::length()const
{
    return m_length;
}
DnaSequence DnaSequence::slice(size_t start, size_t end)const
{
    DnaSequence dnaSequence(end-start);
    for(size_t i = 0; i < dnaSequence.length() ; i++){
        (dnaSequence.m_data)[i] = m_data[start+i];
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
size_t DnaSequence::find(const DnaSequence& subDnaSequence,size_t Index)const
{
    return getDnaAsString().find(subDnaSequence.getDnaAsString(),Index);

}
size_t DnaSequence::Count(const DnaSequence& subDnaSequence)const
{

    size_t counter = 0;
    for (size_t Index = find(subDnaSequence); Index != -1 && Index + subDnaSequence.length() <= length();
         Index = find(subDnaSequence, Index + subDnaSequence.length()))
    {
        ++counter;
    }
    return counter;

}
std::list<size_t> DnaSequence::FindAll(const DnaSequence& subDnaSequence)const
{
    std::list<size_t> indexes;
    for (size_t Index = find(subDnaSequence); Index != -1 && Index + subDnaSequence.length() <= length();
         Index = find(subDnaSequence, Index + subDnaSequence.length()))
    {
        indexes.push_back(Index);
    }
    return indexes;
}
std::list<DnaSequence> DnaSequence::FindConsensus()
{

    size_t indexTAG,indexTAA,indexTGA;
    std::list<size_t > indexes = FindAll("ATG");
    std::list<DnaSequence> Consensus;
    for (std::list<size_t>::iterator it = indexes.begin(); it != indexes.end(); ++it) {
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
    if (index >= m_length || index < 0)
        throw std::out_of_range("not valid index");

    return m_data[index];

}
DnaSequence::~DnaSequence()
{
    delete[] m_data;
    m_data = NULL;
}
bool operator==(const DnaSequence& dnaSequence1, const DnaSequence& dnaSequence2)
{
    return strcmp(dnaSequence1.GetData(), dnaSequence2.GetData()) == 0;
}
bool operator!=(const DnaSequence& dnaSequence1, const DnaSequence& dnaSequence2)
{
    return !(dnaSequence1 == dnaSequence2);
}





