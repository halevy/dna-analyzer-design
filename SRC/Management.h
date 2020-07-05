//
// Created by a on 7/5/20.
//

#ifndef DNA_MANAGEMENT_H
#define DNA_MANAGEMENT_H

#include "Icommand.h"
class Management:public Icommand{
public:
    const char* run(std::vector<char*> params) = 0;
};
#endif //DNA_MANAGEMENT_H
