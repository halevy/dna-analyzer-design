//
// Created by a on 9/21/20.
//

#ifndef DNA_ANALYSIS_H
#define DNA_ANALYSIS_H


#include "Icommand.h"
#include <sstream>

class Analysis : public Icommand{
public:
    void run(std::vector<std::string> params) = 0;
};


#endif //DNA_ANALYSIS_H
