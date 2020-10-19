//
// Created by a on 9/21/20.
//

#ifndef DNA_LOADPARAMS_H
#define DNA_LOADPARAMS_H


#include "CreationParams.h"

class LoadParams : public CreationParams{
public:
    bool isValid(std::vector<std::string>& params);
};


#endif //DNA_LOADPARAMS_H
