//
// Created by a on 7/6/20.
//

#ifndef SRC_LOAD_H
#define SRC_LOAD_H
#include "Creation.h"
class Load:public Creation{
public:
    const char* run(std::vector<char*> params);
};
#endif //SRC_LOAD_H
