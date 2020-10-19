//
// Created by a on 9/22/20.
//

#ifndef DNA_COUNTPARAMS_H
#define DNA_COUNTPARAMS_H


#include "AnalysisParams.h"

class CountParams: public AnalysisParams {
public:
    bool isValid(std::vector<std::string>& params);
};


#endif //DNA_COUNTPARAMS_H
