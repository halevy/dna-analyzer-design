//
// Created by a on 9/21/20.
//

#include "LoadParams.h"

bool LoadParams::isValid(std::vector<std::string> &params) {

    CreationParams::validSize(params.size());
    CreationParams::validArgs(params);

    return true;
}