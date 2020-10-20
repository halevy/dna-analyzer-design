
#include "AnalysisParams.h"

bool AnalysisParams::isHashTag(std::string &idByString) {

    if(idByString[0] != '#')
        throw std::invalid_argument(" Missing hashTag");

    idByString.erase(0,1);

    return true;
}

bool AnalysisParams::validSize(size_t size, unsigned int desirableSize) {

    if(size < desirableSize)
        throw std::invalid_argument(" Not enough parameters ");

    if(size > desirableSize)
        throw std::invalid_argument(" Too much parameters ");

    return true;
}

