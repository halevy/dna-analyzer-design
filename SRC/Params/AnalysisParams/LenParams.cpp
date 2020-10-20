

#include "LenParams.h"

bool LenParams::isValid(std::vector<std::string> &params) {

    validSize(params.size(),2);
    isHashTag(params[1]);

    return true;

}