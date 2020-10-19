//
// Created by a on 9/22/20.
//

#ifndef DNA_FINDALLPARAMS_H
#define DNA_FINDALLPARAMS_H


#include "AnalysisParams.h"

class FindAllParams: public AnalysisParams {
public:
    bool isValid(std::vector<std::string>& params);
};


#endif //DNA_FINDALLPARAMS_H
