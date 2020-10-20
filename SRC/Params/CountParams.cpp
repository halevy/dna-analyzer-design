//
// Created by a on 9/22/20.
//

#include "CountParams.h"

bool CountParams::isValid(std::vector<std::string> &params) {

    validSize(params.size(),3);
    isHashTag(params[1]);

    return true;
}