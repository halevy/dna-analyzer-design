//
// Created by a on 10/13/20.
//

#include "SaveParams.h"

bool SaveParams::isValid(std::vector<std::string> &params) {

    if(params.size() > 3 || params.size() == 1 ||(params[1][0] != '#' && params[1][0] != '@'))
        throw std::invalid_argument("invalid argument");

    if(params[1][0] != '#') {
        throw std::invalid_argument(" Missing hashTag");
    }

    return true;

}