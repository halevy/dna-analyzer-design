//
// Created by a on 9/22/20.
//

#ifndef DNA_FINDPARAMS_H
#define DNA_FINDPARAMS_H


#include "Iparams.h"

class FindParams : public Iparams{
public:
    bool isValid(std::vector<std::string>& params);
};


#endif //DNA_FINDPARAMS_H
