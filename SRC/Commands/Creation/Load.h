

#ifndef SRC_LOAD_H
#define SRC_LOAD_H

#include "Creation.h"

class Load:public Creation{
public:
    void run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer);
};

#endif //SRC_LOAD_H
