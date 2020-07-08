//
// Created by a on 7/6/20.
//

#ifndef SRC_CONTAINERDNADATA_H
#define SRC_CONTAINERDNADATA_H
#include "DnaData.h"
#include <map>

class ContainerDnaData{
private:
    std::map<std::string,size_t > m_nameWithId;
    std::map<size_t ,DnaData* > m_idWithDnaData;


public:
    void Insert(DnaData* dnaData);
    DnaData* FindDnaData (size_t id);
    size_t FindId(const std::string& name);
    static ContainerDnaData& getContainer();
};
#endif //SRC_CONTAINERDNADATA_H
