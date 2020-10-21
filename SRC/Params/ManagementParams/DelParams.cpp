//
// Created by a on 10/14/20.
//

#include "DelParams.h"

bool DelParams::isValid(std::vector<std::string> &params) {

    validSize(params.size());
    isHashTag(params[1]);

    return true;
}

