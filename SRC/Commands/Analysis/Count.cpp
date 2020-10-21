
#include "Count.h"

void Count::run(std::vector<std::string>& params) {

    DnaData* dnaData = getDnaDataByString(params[1]);
    std::cout<< dnaData->getDna().Count(getDnaSequence(params[2])) <<std::endl;
}