//
// Created by a on 9/21/20.
//

#ifndef DNA_NEWPARAMS_H
#define DNA_NEWPARAMS_H

#include "Iparams.h"

class NewParams: public Iparams {
public:
    bool isValid(std::vector<std::string>& params);
};


#endif //DNA_NEWPARAMS_H
