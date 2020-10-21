//
// Created by a on 10/14/20.
//

#ifndef DNA_CONTROL_H
#define DNA_CONTROL_H


#include "../Icommand.h"

class Control: public Icommand {
public:
    void run(std::vector<std::string>& params) = 0;
};


#endif //DNA_CONTROL_H
