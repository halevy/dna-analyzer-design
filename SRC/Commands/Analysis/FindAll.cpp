

#include "FindAll.h"

void FindAll::run(std::vector<std::string> params) {

    DnaData* dnaData = getDnaDataByString(params[1]);
    std::list<long > indexes = dnaData->getDna().FindAll(getDnaSequence(params[2]));
    for (std::list<long>::iterator it = indexes.begin(); it != indexes.end(); ++it){
        std::cout << *it + 1 <<" ";
    }
    std::cout << std::endl;

}