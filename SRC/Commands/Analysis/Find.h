
#ifndef DNA_FIND_H
#define DNA_FIND_H


#include "Analysis.h"

class Find : public Analysis{
public:
    void run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer);
};


#endif //DNA_FIND_H
