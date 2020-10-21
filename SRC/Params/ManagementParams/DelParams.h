//
// Created by a on 10/14/20.
//

#ifndef DNA_DELPARAMS_H
#define DNA_DELPARAMS_H


#include "ManagementParams.h"

class DelParams: public ManagementParams {
public:
    bool isValid(std::vector<std::string>& params);
};


#endif //DNA_DELPARAMS_H
