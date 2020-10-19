//
// Created by a on 7/8/20.
//

#include "Dup.h"
#include <vector>
#include <sstream>
#include "../Dnadata/dnasequence.h"


void Dup::run(std::vector<std::string> params) {


    std::stringstream f(params[1]);
    size_t id;
    f >> id;
    DnaData* dnaData = ContainerDnaData::getContainer().FindDnaData(id);
    std::string name;
    if(params.size() == 3){
        name = params[2];
    }
    else{
        static size_t defaultNum = 1;
        std::stringstream ss;
        ss << dnaData->getName() <<'_' << defaultNum ;
        name = ss.str();
        defaultNum++;
    }
    DnaData* newDnaData = new DnaData(dnaData->getDna().GetData(),name,'0');
    ContainerDnaData::getContainer().Insert(newDnaData);
    print(*newDnaData);



}
