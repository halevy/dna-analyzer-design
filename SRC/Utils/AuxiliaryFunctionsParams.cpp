//
// Created by a on 10/18/20.
//

#include <stdexcept>
#include "AuxiliaryFunctionsParams.h"

bool validSize(size_t size) {

    if(size < 2)
        throw std::invalid_argument(" Not enough parameters ");

    if(size > 3)
        throw std::invalid_argument(" Too much parameters ");

    return true;
}

bool isHashTag(std::string &idByString) {

    if(idByString[0] != '#')
        throw std::invalid_argument(" Missing hashTag");

    idByString.erase(0,1);

    return true;
}
