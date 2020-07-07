//
// Created by a on 7/6/20.
//

#ifndef SRC_DNADATA_H
#define SRC_DNADATA_H
#include "dnasequence.h"
#include <string>

class DnaData{
private:
    DnaSequence m_dna;
    std::string m_name;
    char m_status;
    size_t m_id;
    static size_t m_initializing_id;

public:
    DnaData(const std::string& dna,const std::string& name,char status);
    const DnaSequence& getDna()const;
    const std::string& getName()const;
    char getStatus();
    void setStatus(char status);
    size_t getId()const;


};
#endif //SRC_DNADATA_H
