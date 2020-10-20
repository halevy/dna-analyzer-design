
#ifndef DNA_ANALYSIS_H
#define DNA_ANALYSIS_H



#include "../Icommand.h"
#include <sstream>

class Analysis : public Icommand{
public:
    void run(std::vector<std::string> params) = 0;
    DnaData* getDnaDataByString(const std::string& idByString);
    const char* getDnaSequence(std::string& param);
};


#endif //DNA_ANALYSIS_H
