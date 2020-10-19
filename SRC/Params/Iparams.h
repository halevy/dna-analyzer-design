//
// Created by a on 9/21/20.
//

#ifndef DNA_IPARAMS_H
#define DNA_IPARAMS_H

#include <vector>
#include <string>
#include <iostream>
#include <stdexcept>

class Iparams {
public:
    virtual bool isValid(std::vector<std::string>& params) = 0;
    virtual ~Iparams(){}
};


#endif //DNA_IPARAMS_H
