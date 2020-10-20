

#include "FindAllParams.h"

bool FindAllParams::isValid(std::vector<std::string> &params) {

    validSize(params.size(),3);
    isHashTag(params[1]);

    return true;
}