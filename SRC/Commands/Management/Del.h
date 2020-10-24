//
// Created by a on 10/14/20.
//

#ifndef DNA_DEL_H
#define DNA_DEL_H


#include "Management.h"

class Del : public Management{
public:
    void run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer);
};


#endif //DNA_DEL_H
