//
// Created by a on 9/21/20.
//


#include "DupParams.h"


bool DupParams::isValid(std::vector<std::string> &params) {

    try
    {
        if(params.size() > 3 || params.size() == 1 || params[1][0] != '#')
            throw std::invalid_argument("invalid argument");

    }
    catch(std::invalid_argument& e)
    {
        std::cout<<"Exception!"<<e.what()<<std::endl;
        return false;
    }
    params[1].erase(0,1);

    return true;
}