//
// Created by a on 7/6/20.
//

#ifndef SRC_ICOMMAND_H
#define SRC_ICOMMAND_H
#include <vector>
#include <iostream>
#include "../Dnadata/ContainerDnaData.h"
#include <string>

class Icommand{

public:
    virtual void run(std::vector<std::string> params) = 0;
    virtual ~Icommand(){}
};
#endif //SRC_ICOMMAND_H
