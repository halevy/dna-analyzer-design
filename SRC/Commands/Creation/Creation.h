//
// Created by a on 7/6/20.
//

#ifndef SRC_CREATION_H
#define SRC_CREATION_H


#include "../Icommand.h"
#include <iostream>

class Creation:public Icommand{
public:
     void run(std::vector<std::string> params) = 0;
     static void print(const DnaData& dnaData);
     void createNewDna(const std::string& dna, const std::string& name,char status);
};
#endif //SRC_CREATION_H
