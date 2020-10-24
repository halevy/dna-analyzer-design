
#ifndef DNA_COUNT_H
#define DNA_COUNT_H


#include "Analysis.h"

class Count: public Analysis {
public:
    void run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer);
};


#endif //DNA_COUNT_H
