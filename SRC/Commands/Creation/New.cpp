//
// Created by a on 7/6/20.
//
#include "New.h"
#include <vector>
#include <sstream>



void New::run(std::vector<std::string> params) {

    std::string name;

    if(params.size() == 3){
        name = params[2];
    }
    else{
        static size_t defaultNum = 1;
        std::stringstream ss;
        ss << "seq" << defaultNum ;
        name = ss.str();
        defaultNum++;
    }
    createNewDna(params[1],name,'0');
}
