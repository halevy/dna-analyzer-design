//
// Created by a on 7/6/20.
//
#include "ConteinerDnaData.h"


ConteinerDnaData::ConteinerDnaData(const DnaData& dnaData){
    m_nameWithId.insert(std::pair<size_t ,char*>(dnaData.getId(),dnaData.getName()));
    m_nameWithDnaData.insert(std::pair<char* ,DnaData>(dnaData.getName(),dnaData));
}