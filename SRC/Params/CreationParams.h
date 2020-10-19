//
// Created by a on 9/22/20.
//

#ifndef DNA_CREATIONPARAMS_H
#define DNA_CREATIONPARAMS_H


#include "Iparams.h"

class CreationParams: public Iparams {
public:
    bool isValid(std::vector<std::string>& params) = 0;
    bool isHashTag(std::string& idByString);
    bool validSize(size_t size);
    void validArgs(std::vector<std::string>& params);
};


#endif //DNA_CREATIONPARAMS_H
