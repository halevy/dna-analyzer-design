//
// Created by a on 10/13/20.
//

#ifndef DNA_SAVEPARAMS_H
#define DNA_SAVEPARAMS_H


#include "ManagementParams.h"

class SaveParams: public ManagementParams {
public:
    bool isValid(std::vector<std::string>& params);
};


#endif //DNA_SAVEPARAMS_H
