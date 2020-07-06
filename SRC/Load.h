//
// Created by a on 7/5/20.
//

#ifndef DNA_LOAD_H
#define DNA_LOAD_H

#include "Creation.h"
class Load:public Creation{
public:
    const char* run(std::vector<char*> params);
};
#endif //DNA_LOAD_H
