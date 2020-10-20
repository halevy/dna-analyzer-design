

#include "Find.h"

void Find::run(std::vector<std::string> params) {

    DnaData* dnaData = getDnaDataByString(params[1]);
    std::cout<< dnaData->getDna().find(getDnaSequence(params[2])) + 1 <<std::endl;

}