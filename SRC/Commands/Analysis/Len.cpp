

#include "Len.h"


void Len::run(std::vector<std::string>& params) {

    DnaData* dnaData = getDnaDataByString(params[1]);
    std::cout<< dnaData->getDna().length() <<std::endl;
}