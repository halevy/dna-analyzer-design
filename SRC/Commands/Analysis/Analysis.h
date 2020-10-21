
#ifndef DNA_ANALYSIS_H
#define DNA_ANALYSIS_H


#include "../../Utils/AuxiliaryFunctionsCommands.h"
#include "../Icommand.h"
#include <sstream>

class Analysis : public Icommand{
public:
    void run(std::vector<std::string>& params) = 0;
    const char* getDnaSequence(std::string& param);
};


#endif //DNA_ANALYSIS_H
