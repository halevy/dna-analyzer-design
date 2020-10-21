//
// Created by a on 10/14/20.
//

#ifndef DNA_CONTROLPARAMS_H
#define DNA_CONTROLPARAMS_H


#include "../Iparams.h"

class ControlParams : public Iparams{
public:
    bool isValid(std::vector<std::string>& params) = 0;
};


#endif //DNA_CONTROLPARAMS_H
