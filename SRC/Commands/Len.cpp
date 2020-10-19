//
// Created by a on 9/21/20.
//

#include "Len.h"


void Len::run(std::vector<std::string> params) {

    DnaData* dnaData = Analysis::getDnaDataByString(params[1]);
    std::cout<< dnaData->getDna().length() <<std::endl;
}