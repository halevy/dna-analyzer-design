
#ifndef DNA_LENPARAMS_H
#define DNA_LENPARAMS_H


#include "AnalysisParams.h"

class LenParams: public AnalysisParams {
public:
    bool isValid(std::vector<std::string>& params);
};


#endif //DNA_LENPARAMS_H
