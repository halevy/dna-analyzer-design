//
// Created by a on 7/6/20.
//

#ifndef SRC_ICOMMAND_H
#define SRC_ICOMMAND_H
#include <vector>
#include <iostream>
#include "ConteinerDnaData.h"
#include <string.h>

class Icommand{

public:
    virtual const char* run(std::vector<char*> params) = 0;

};
#endif //SRC_ICOMMAND_H
