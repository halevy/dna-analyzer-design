//
// Created by a on 10/13/20.
//

#include "SaveParams.h"

bool SaveParams::isValid(std::vector<std::string> &params) {

    validSize(params.size());
    isHashTag(params[1]);

    return true;

}