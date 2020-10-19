//
// Created by a on 9/21/20.
//

#include "LoadParams.h"

bool LoadParams::isValid(std::vector<std::string> &params) {

    try
    {
        if(params.size() > 3 || (params.size() == 3 && params[2][0] != '@'))
            throw std::invalid_argument("invalid argument");
    }
    catch(std::invalid_argument& e)
    {
        std::cout<<"Exception!"<<e.what()<<std::endl;
        return false;
    }

    return true;
}