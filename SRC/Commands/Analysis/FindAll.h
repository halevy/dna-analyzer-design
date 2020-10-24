
#ifndef DNA_FINDALL_H
#define DNA_FINDALL_H


#include "Analysis.h"

class FindAll : public Analysis{
public:
    void run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer);
};


#endif //DNA_FINDALL_H
