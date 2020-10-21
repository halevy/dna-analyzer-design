//
// Created by a on 10/13/20.
//

#include "ManagementParams.h"

bool ManagementParams::validSize(size_t size) {

    if(size < 2)
        throw std::invalid_argument(" Not enough parameters ");

    if(size > 3)
        throw std::invalid_argument(" Too much parameters ");

    return true;
}

bool ManagementParams::isHashTag(std::string &idByString) {

    if(idByString[0] != '#')
        throw std::invalid_argument(" Missing hashTag");

    idByString.erase(0,1);

    return true;
}