//
// Created by a on 9/21/20.
//

#ifndef DNA_LENPARAMS_H
#define DNA_LENPARAMS_H


#include "Iparams.h"

class LenParams: public Iparams {
public:
    bool isValid(std::vector<std::string>& params);
};


#endif //DNA_LENPARAMS_H
