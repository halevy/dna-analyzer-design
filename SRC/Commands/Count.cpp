//
// Created by a on 9/22/20.
//

#include "Count.h"

void Count::run(std::vector<std::string> params) {

    DnaData* dnaData = Analysis::getDnaDataByString(params[1]);
    std::cout<< dnaData->getDna().Count(params[2]) <<std::endl;
}