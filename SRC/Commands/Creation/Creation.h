//
// Created by a on 7/6/20.
//

#ifndef SRC_CREATION_H
#define SRC_CREATION_H


#include "../Icommand.h"
#include <iostream>
#include <sstream>
#include "../../Utils/AuxiliaryFunctionsCommands.h"


class Creation:public Icommand{
public:
     void run(std::vector<std::string> params) = 0;
     void createNewDna(const std::string& dna, const std::string& name,char status);
     const std::string& getNameOfDna(std::string& name);
};
#endif //SRC_CREATION_H
