//
// Created by a on 7/6/20.
//

#ifndef SRC_DNASEQUENCE_H
#define SRC_DNASEQUENCE_H

#include <string.h>
#include <iostream>
#include <exception>
#include <string>
#include <list>
#include <fstream>

class DnaSequence
{
private:

    class Nucleotide{
    private:
        char m_c;
    public:
        Nucleotide(const char c):m_c(c){}
        Nucleotide():m_c(){}
        Nucleotide& operator=(const char c);
        char GetC()const{return m_c;}
        static bool IsValidChar(const char c);
        Nucleotide& operator=(const Nucleotide& nucleotide);
        char PiarOfNucleotide();
        operator char(){return m_c;}

        friend std::ostream& operator<<(std::ostream& os, const Nucleotide& nucleotide){return os<<nucleotide.m_c<<std::endl;}
    };
    Nucleotide* m_data;
    size_t m_length;

protected:
    bool IsValidDna(const char* dnaSequence);
    Nucleotide* InitDna(const char* dnaSequence);

public:
    DnaSequence(const char* dnaSequence);
    DnaSequence(const std::string& dnaSequence);
    DnaSequence(const size_t size);
    DnaSequence& operator = (const DnaSequence& dnaSequence);
    Nucleotide& operator[](size_t index)const;
    DnaSequence(const DnaSequence& dnaSequence);
    size_t length()const;
    friend std::ostream& operator<<(std::ostream& os, const DnaSequence& dnaSequence);
    ~DnaSequence();
    const char* GetData()const;
    const std::string getDnaAsString()const{ return GetData();}
    DnaSequence slice(size_t start,size_t end)const;
    DnaSequence Pairing();
    size_t find(const DnaSequence& subDnaSequence,size_t Index = 0)const;
    size_t Count(const DnaSequence& subDnaSequence)const;
    std::list<size_t> FindAll(const DnaSequence& subDnaSequence)const ;
    std::list<DnaSequence> FindConsensus();
};

bool operator==(const DnaSequence& dnaSequence1, const DnaSequence& dnaSequence2);
bool operator!=(const DnaSequence& dnaSequence1, const DnaSequence& dnaSequence2);

#endif //SRC_DNASEQUENCE_H
