//
// Created by a on 7/6/20.
//

#ifndef SRC_SAVE_H
#define SRC_SAVE_H
#include "Creation.h"

#include "Management.h"
class Save:public Management{
public:
    void run(std::vector<std::string> params);
};
#endif //SRC_SAVE_H
