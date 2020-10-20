

#include "DupParams.h"


bool DupParams::isValid(std::vector<std::string> &params) {

    validSize(params.size());
    isHashTag(params[1]);
    validArgs(params);

    return true;
}