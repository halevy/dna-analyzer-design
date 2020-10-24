

#ifndef SRC_DUP_H
#define SRC_DUP_H

#include "Creation.h"

class Dup:public Creation{
public:
    void run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer);

};
#endif //SRC_DUP_H
