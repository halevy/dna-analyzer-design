//
// Created by a on 9/22/20.
//

#include "FindAll.h"

void FindAll::run(std::vector<std::string> params) {

    try{
        DnaData* dnaData = Analysis::getDnaDataByString(params[1]);
        std::list<long > indexes = dnaData->getDna().FindAll(params[2]);
        for (std::list<long>::iterator it = indexes.begin(); it != indexes.end(); ++it){
            std::cout << *it + 1 <<" ";
        }
        std::cout << std::endl;
    }
    catch(std::invalid_argument& e)
    {
        return;

    }
}