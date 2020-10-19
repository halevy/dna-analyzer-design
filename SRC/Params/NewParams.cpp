//
// Created by a on 9/21/20.
//


#include "NewParams.h"

bool NewParams::isValid(std::vector <std::string> &params) {

    try
    {
        if(params.size() > 3 || (params.size() == 3 && params[2][0] != '@') || params.size() == 1 )
            throw std::invalid_argument("invalid argument");
    }
    catch(std::invalid_argument& e)
    {
        std::cout<<"Exception!"<<e.what()<<std::endl;
        return false;
    }


    if (params.size() == 3) {
        if (params[2][1] == '@') {
            params[2].erase(0, 2);
        } else {
            params[2].erase(0, 1);
        }
    }
    return true;
}