//
// Created by a on 9/22/20.
//

#include "AnalysisParams.h"

bool AnalysisParams::isHashTag(const std::string &idByString) {

    if(idByString[0] != '#')
        throw std::invalid_argument("Missing hashTag");

    return true;
}

bool AnalysisParams::validSize(size_t size, unsigned int desirableSize) {

    if(size != desirableSize)
        throw std::invalid_argument(" Not enough parameters ");

    return true;
}