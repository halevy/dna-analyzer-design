
#ifndef DNA_ANALYSISPARAMS_H
#define DNA_ANALYSISPARAMS_H



#include "../Iparams.h"

class AnalysisParams : public Iparams{
public:
    bool isValid(std::vector<std::string>& params) = 0;
    bool isHashTag(std::string& idByString);
    bool validSize(size_t size,unsigned int desirableSize);

};


#endif //DNA_ANALYSISPARAMS_H
