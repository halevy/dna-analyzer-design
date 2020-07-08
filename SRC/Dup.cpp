//
// Created by a on 7/8/20.
//

#include "Dup.h"
#include <vector>
#include <sstream>
#include "dnasequence.h"


void Dup::run(std::vector<std::string> params) {
    try
    {
        if(params.size() > 3 || params.size() == 1 || params[1][0] != '#')
            throw std::invalid_argument("invalid argument");
    }
    catch(std::invalid_argument& e)
    {
        std::cout<<"Exception!"<<e.what()<<std::endl;
        return;
    }

    params[1].erase(0,1);
    std::stringstream f(params[1]);
    size_t id;
    f >> id;
    DnaData newDnaData(*(ContainerDnaData::getContainer().FindDnaData(id)));
    if(params.size() == 3){
        newDnaData.setName(params[2]);
    }
    ContainerDnaData::getContainer().Insert(&newDnaData);
    print(newDnaData);



}
