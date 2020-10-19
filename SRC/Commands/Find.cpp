//
// Created by a on 9/22/20.
//

#include "Find.h"

void Find::run(std::vector<std::string> params) {

    try{
        std::stringstream f(params[1]);
        size_t id;
        f >> id;
        DnaData* dnaData = ContainerDnaData::getContainer().FindDnaData(id);
        std::cout<< dnaData->getDna().find(params[2]) + 1 <<std::endl;
    }
    catch(std::invalid_argument& e)
    {
        return;

    }

}