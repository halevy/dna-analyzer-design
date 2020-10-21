

#include "FindAll.h"

void FindAll::run(std::vector<std::string>& params) {

    DnaData* dnaData = getDnaDataByString(params[1]);
    std::list<size_t > indexes = dnaData->getDna().FindAll(getDnaSequence(params[2]));
    if(!indexes.size()){
        throw std::invalid_argument("Not found");
    }
    for (std::list<size_t>::iterator it = indexes.begin(); it != indexes.end(); ++it){
        std::cout << *it + 1 <<" ";
    }
    std::cout << std::endl;

}