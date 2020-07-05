//
// Created by a on 7/5/20.
//

#ifndef DNA_CREATION_H
#define DNA_CREATION_H

#include "Icommand.h"

class Creation:public Icommand{
public:
    const char* run(std::vector<char*> params) = 0;
};
#endif //DNA_CREATION_H
