//
// Created by a on 7/6/20.
//
#include "ContainerDnaData.h"


void ContainerDnaData::Insert(DnaData* dnaData){
    m_nameWithId[dnaData->getName()] = dnaData->getId();
    m_idWithDnaData[dnaData->getId()] = dnaData;

}
DnaData* ContainerDnaData::FindDnaData(size_t id) {
    return m_idWithDnaData[id];
}
size_t ContainerDnaData::FindId(const std::string &name) {
    return m_nameWithId[name];
}
size_t ContainerDnaData::getSize() {
    return m_idWithDnaData.size();
}
ContainerDnaData& ContainerDnaData::getContainer() {
    static ContainerDnaData containerDnaData;
    return containerDnaData;
}
