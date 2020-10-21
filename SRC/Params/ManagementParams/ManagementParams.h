//
// Created by a on 10/13/20.
//

#ifndef DNA_MANAGEMENTPARAMS_H
#define DNA_MANAGEMENTPARAMS_H

#include "../../Utils/AuxiliaryFunctionsParams.h"
#include "../Iparams.h"

class ManagementParams: public Iparams {
public:
    bool isValid(std::vector<std::string>& params) = 0;
};


#endif //DNA_MANAGEMENTPARAMS_H
