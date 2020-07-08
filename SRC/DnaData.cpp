//
// Created by a on 7/6/20.
//

#include "DnaData.h"
#include <string.h>
#include <sstream>

size_t DnaData::m_initializing_id = 0;


DnaData::DnaData(const std::string& dna, const std::string& name,char status):m_dna(dna),m_status(status),
m_id(++m_initializing_id),m_name(name) {

}
DnaData::DnaData(const DnaData &dnaData):m_dna(dnaData.m_dna),m_status('0'),m_id(++m_initializing_id){
    static size_t defaultNum = 1;
    std::stringstream ss;
    ss << dnaData.m_name <<'_' << defaultNum ;
    m_name = ss.str();
    defaultNum++;
}
const DnaSequence& DnaData::getDna() const{
    return m_dna;
}
const std::string&  DnaData::getName()const {
    return m_name;
}
void DnaData::setName(const std::string &name) {
    m_name = name;
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