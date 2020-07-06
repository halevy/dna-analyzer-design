//
// Created by a on 7/5/20.
//

#ifndef AA_DNADATA_H
#define AA_DNADATA_H

#include "dnaseqeunce.h"
class DnaData{
private:
    DnaSequence m_dna;
    const char* m_name;
    size_t m_id;
    char m_status;
public:
    DnaData(const char* dna,const char* name);
    DnaSequence getDna();
    char* getName();
    size_t getId();
    char getStatus();
};
#endif //AA_DNADATA_H
