//
// Created by a on 9/21/20.
//

#include "FactoryCommands.h"
#include "../Commands/New.h"
#include "../Commands/Load.h"
#include "../Commands/Save.h"
#include "../Commands/Dup.h"
#include "../Commands/Len.h"
#include "../Commands/Find.h"
#include "../Commands/Count.h"
#include "../Commands/FindAll.h"

std::map<const std::string,Icommand*> FactoryCommands::m_commands = initCommands();

std::map<const std::string,Icommand*> FactoryCommands::initCommands() {

    std::map<const std::string,Icommand*> temp;
    temp.insert(std::pair<const std::string,Icommand*>("new",new New));
    temp.insert(std::pair<const std::string,Icommand*>("dup",new Dup));
    temp.insert(std::pair<const std::string,Icommand*>("save",new Save));
    temp.insert(std::pair<const std::string,Icommand*>("load",new Load));
    temp.insert(std::pair<const std::string,Icommand*>("len",new Len));
    temp.insert(std::pair<const std::string,Icommand*>("find",new Find));
    temp.insert(std::pair<const std::string,Icommand*>("count",new Count));
    temp.insert(std::pair<const std::string,Icommand*>("findall",new FindAll));

    return temp;
}

Icommand* FactoryCommands::getCommand(const std::string &command) {
    return m_commands[command];
}