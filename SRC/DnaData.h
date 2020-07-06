//
// Created by a on 7/6/20.
//

#ifndef SRC_DNADATA_H
#define SRC_DNADATA_H
#include "dnasequence.h"


class DnaData{
private:
    DnaSequence m_dna;
    char* m_name;
    char m_status;
    size_t m_id;
    static size_t m_initializing_id;
    static size_t m_defult_num;
public:
    DnaData(const char* dna,const char* name,char status);
    const DnaSequence& getDna()const;
    char* getName()const;
    char getStatus();
    void setStatus(char status);
    size_t getId()const;


};
#endif //SRC_DNADATA_H
