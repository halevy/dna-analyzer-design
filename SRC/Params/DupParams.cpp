//
// Created by a on 9/21/20.
//


#include "DupParams.h"


bool DupParams::isValid(std::vector<std::string> &params) {

    validSize(params.size());
    isHashTag(params[1]);
    validArgs(params);

    return true;
}