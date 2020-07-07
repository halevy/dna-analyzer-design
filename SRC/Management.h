//
// Created by a on 7/6/20.
//

#ifndef SRC_MANAGEMENT_H
#define SRC_MANAGEMENT_H
#include "Icommand.h"
class Management:public Icommand{
public:
    void run(std::vector<std::string> params) = 0;
};
#endif //SRC_MANAGEMENT_H
