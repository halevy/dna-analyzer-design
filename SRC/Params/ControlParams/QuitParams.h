//
// Created by a on 10/14/20.
//

#ifndef DNA_QUITPARAMS_H
#define DNA_QUITPARAMS_H


#include "ControlParams.h"

class QuitParams : public ControlParams{
public:
    bool isValid(std::vector<std::string>& params);
};


#endif //DNA_QUITPARAMS_H
