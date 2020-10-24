

#ifndef SRC_SAVE_H
#define SRC_SAVE_H


#include "Management.h"
class Save:public Management{
public:
    void run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer);
};
#endif //SRC_SAVE_H
