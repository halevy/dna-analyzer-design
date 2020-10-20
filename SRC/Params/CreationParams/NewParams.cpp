

#include "NewParams.h"

bool NewParams::isValid(std::vector <std::string> &params) {

    validSize(params.size());
    validArgs(params);

    return true;
}