//
// Created by a on 9/21/20.
//


#include "DupParams.h"


bool DupParams::isValid(std::vector<std::string> &params) {

    CreationParams::validSize(params.size());
    CreationParams::isHashTag(params[1]);
    CreationParams::validArgs(params);

    return true;
}