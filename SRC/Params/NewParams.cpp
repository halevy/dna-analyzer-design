//
// Created by a on 9/21/20.
//


#include "NewParams.h"

bool NewParams::isValid(std::vector <std::string> &params) {

    CreationParams::validSize(params.size());
    CreationParams::validArgs(params);

    return true;
}