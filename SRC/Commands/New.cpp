//
// Created by a on 7/6/20.
//
#include "New.h"
#include <vector>
#include <sstream>
#include "../Dnadata/dnasequence.h"


void New::run(std::vector<std::string> params) {

    try{
        if(params.size() == 3){

            DnaData* dnaData = new DnaData(params[1],params[2],'0');
            ContainerDnaData::getContainer().Insert(dnaData);
            print(*dnaData);
        }
        else{
            static size_t defaultNum = 1;
            std::stringstream ss;
            ss << "seq" << defaultNum ;
            DnaData* dnaData = new DnaData(params[1],ss.str(),'0');
            ContainerDnaData::getContainer().Insert(dnaData);
            print(*dnaData);
            defaultNum++;
        }
    }
    catch(std::invalid_argument& e)
    {
        return;

    }

}
