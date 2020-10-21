//
// Created by a on 9/21/20.
//

#ifndef DNA_FACTORYCOMMANDS_H
#define DNA_FACTORYCOMMANDS_H


#include <map>
#include <string>
#include "../Commands/Icommand.h"

class FactoryCommands {
private:
    static std::map<const std::string,Icommand*> m_commands;
    static std::map<const std::string,Icommand*> initCommands();
public:
    Icommand* getCommand(const std::string& command);
    ~FactoryCommands();
};


#endif //DNA_FACTORYCOMMANDS_H
