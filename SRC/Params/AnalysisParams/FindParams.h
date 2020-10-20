
#ifndef DNA_FINDPARAMS_H
#define DNA_FINDPARAMS_H


#include "AnalysisParams.h"

class FindParams : public AnalysisParams{
public:
    bool isValid(std::vector<std::string>& params);
};


#endif //DNA_FINDPARAMS_H
