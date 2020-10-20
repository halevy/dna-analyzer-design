//
// Created by a on 9/21/20.
//

#include "LenParams.h"

bool LenParams::isValid(std::vector<std::string> &params) {

    validSize(params.size(),2);
    isHashTag(params[1]);

    return true;

}