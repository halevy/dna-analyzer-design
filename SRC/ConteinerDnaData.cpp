//
// Created by a on 7/6/20.
//
#include "ConteinerDnaData.h"


ConteinerDnaData::ConteinerDnaData(const DnaData& dnaData){
    m_nameWithId.insert(std::pair<size_t ,std::string>(dnaData.getId(),dnaData.getName()));
    m_nameWithDnaData.insert(std::pair<std::string ,DnaData>(dnaData.getName(),dnaData));
}