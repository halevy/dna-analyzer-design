//
// Created by a on 7/5/20.
//

#ifndef DNA_SAVE_H
#define DNA_SAVE_H

#include "Management.h"
class Save:public Management{
public:
    const char* run(std::vector<char*> params);
};
#endif //DNA_SAVE_H
