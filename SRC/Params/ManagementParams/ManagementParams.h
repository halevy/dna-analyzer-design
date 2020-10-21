//
// Created by a on 10/13/20.
//

#ifndef DNA_MANAGEMENTPARAMS_H
#define DNA_MANAGEMENTPARAMS_H


#include "../Iparams.h"

class ManagementParams: public Iparams {
public:
    bool isValid(std::vector<std::string>& params) = 0;
    bool isHashTag(std::string& idByString);
    bool validSize(size_t size);

};


#endif //DNA_MANAGEMENTPARAMS_H
