//
// Created by a on 7/5/20.
//

#ifndef DNA_ICOMMAND_H
#define DNA_ICOMMAND_H
#include <vector>
#include <iostream>

class Icommand{
public:
    virtual const char* run(std::vector<char*> params) = 0;
};

#endif //DNA_ICOMMAND_H
