//
// Created by a on 9/22/20.
//

#include "CountParams.h"

bool CountParams::isValid(std::vector<std::string> &params) {

    AnalysisParams::validSize(params.size(),3);
    AnalysisParams::isHashTag(params[1]);

    return true;
}