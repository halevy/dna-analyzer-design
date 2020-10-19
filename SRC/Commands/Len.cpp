//
// Created by a on 9/21/20.
//

#include "Len.h"


void Len::run(std::vector<std::string> params) {

    std::stringstream f(params[1]);
    size_t id;
    f >> id;
    DnaData* dnaData = ContainerDnaData::getContainer().FindDnaData(id);
    std::cout<< dnaData->getDna().length() <<std::endl;
}