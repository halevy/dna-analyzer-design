//
// Created by a on 9/22/20.
//

#ifndef DNA_FINDALLPARAMS_H
#define DNA_FINDALLPARAMS_H


#include "Iparams.h"

class FindAllParams: public Iparams {
public:
    bool isValid(std::vector<std::string>& params);
};


#endif //DNA_FINDALLPARAMS_H
