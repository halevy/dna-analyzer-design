//
// Created by a on 9/21/20.
//

#ifndef DNA_DUPPARAMS_H
#define DNA_DUPPARAMS_H


#include "Iparams.h"

class DupParams : public Iparams{
public:
    bool isValid(std::vector<std::string>& params);
};


#endif //DNA_DUPPARAMS_H
