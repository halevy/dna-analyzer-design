//
// Created by a on 9/22/20.
//

#include "Find.h"

void Find::run(std::vector<std::string> params) {

    DnaData* dnaData = Analysis::getDnaDataByString(params[1]);
    std::cout<< dnaData->getDna().find(params[2]) + 1 <<std::endl;

}