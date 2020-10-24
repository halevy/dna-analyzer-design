

#ifndef SRC_NEW_H
#define SRC_NEW_H

#include "Creation.h"

class New:public Creation{
public:
    void run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer);
};
#endif //SRC_NEW_H
