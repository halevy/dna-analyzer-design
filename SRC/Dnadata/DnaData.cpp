//
// Created by a on 7/6/20.
//

#include "DnaData.h"
#include <string.h>
#include <sstream>

size_t DnaData::m_initializing_id = 0;


DnaData::DnaData(const std::string& dna, const std::string& name,char status):m_dna(dna),m_status(status),
m_id(++m_initializing_id),m_name(name),m_counter(0) {

}
const DnaSequence& DnaData::getDna() const{
    return m_dna;
}
const std::string&  DnaData::getName()const {
    return m_name;
}
size_t DnaData::getCounter() {
    return ++m_counter;
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