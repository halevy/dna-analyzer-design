
#include "AnalysisParams.h"


bool AnalysisParams::validSize(size_t size, unsigned int desirableSize) {

    if(size < desirableSize)
        throw std::invalid_argument("Not enough parameters ");

    if(size > desirableSize)
        throw std::invalid_argument("Too much parameters ");

    return true;
}

