
#ifndef DNA_LEN_H
#define DNA_LEN_H


#include "Analysis.h"

class Len : public Analysis{
public:
    void run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer);
};


#endif //DNA_LEN_H
