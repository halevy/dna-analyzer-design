//
// Created by a on 7/6/20.
//

#ifndef SRC_CREATION_H
#define SRC_CREATION_H

#include "Icommand.h"

class Creation:public Icommand{
public:
    const char* run(std::vector<char*> params) = 0;
    const char* getIdNameDnasequence(const DnaData& dnaData);
};
#endif //SRC_CREATION_H
