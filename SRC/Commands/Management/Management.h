

#ifndef SRC_MANAGEMENT_H
#define SRC_MANAGEMENT_H

#include "../Icommand.h"
#include "../../Utils/AuxiliaryFunctionsCommands.h"

class Management:public Icommand{
public:
    void run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer) = 0;
    const char* getDnaSequence(DnaData* dnaData);
};
#endif //SRC_MANAGEMENT_H
