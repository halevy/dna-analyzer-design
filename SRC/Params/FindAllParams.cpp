//
// Created by a on 9/22/20.
//

#include "FindAllParams.h"

bool FindAllParams::isValid(std::vector<std::string> &params) {

    AnalysisParams::validSize(params.size(),3);
    AnalysisParams::isHashTag(params[1]);
    params[1].erase(0,1);

    return true;
}