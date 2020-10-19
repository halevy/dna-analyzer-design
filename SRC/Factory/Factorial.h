//
// Created by a on 9/21/20.
//

#ifndef DNA_FACTORIAL_H
#define DNA_FACTORIAL_H


#include <map>
#include <string>
#include "../Commands/Icommand.h"

class Factorial {
private:
    static std::map<const std::string,Icommand*> m_commands;
    static std::map<const std::string,Icommand*> initCommands();
public:
    Icommand* getCommand(const std::string& command);
};


#endif //DNA_FACTORIAL_H
