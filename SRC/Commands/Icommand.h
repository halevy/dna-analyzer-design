

#ifndef SRC_ICOMMAND_H
#define SRC_ICOMMAND_H
#include <vector>
#include <iostream>
#include "../Dnadata/ContainerDnaData.h"
#include "../Writer/Iwriter.h"
#include "../Reader/Ireader.h"
#include <string>

class Icommand{

public:
    virtual void run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer) = 0;
    virtual ~Icommand(){}
};
#endif //SRC_ICOMMAND_H
