//
// Created by a on 7/6/20.
//

#ifndef SRC_SAVE_H
#define SRC_SAVE_H
#include "Creation.h"

#include "Management.h"
class Save:public Management{
public:
    const char* run(std::vector<char*> params);
};
#endif //SRC_SAVE_H
