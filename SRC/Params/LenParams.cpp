//
// Created by a on 9/21/20.
//

#include "LenParams.h"

bool LenParams::isValid(std::vector<std::string> &params) {

    AnalysisParams::validSize(params.size(),2);
    AnalysisParams::isHashTag(params[1]);

    return true;

}