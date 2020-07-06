//
// Created by a on 7/6/20.
//

#include "DnaData.h"
#include "string.h"

size_t DnaData::m_initializing_id = 0;
size_t DnaData::m_defult_num = 0;

DnaData::DnaData(const char *dna, const char *name,char status):m_dna(DnaSequence(dna)),m_status(status),m_id(++m_initializing_id) {
    if(!name){
        strcpy(m_name,"seq");
        strcat(m_name,(char*)&(++m_defult_num));
    }
    else{
        strcpy(m_name,name);
    }

}
const DnaSequence& DnaData::getDna() const{
    return m_dna;
}
char* DnaData::getName()const {
    return m_name;
}
char DnaData::getStatus() {
    return m_status;
}
void DnaData::setStatus(char status) {
    m_status = status;
}
size_t DnaData::getId()const {
    return m_id;
}