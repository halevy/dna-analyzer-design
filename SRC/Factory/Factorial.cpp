//
// Created by a on 9/21/20.
//

#include "Factorial.h"
#include "../Commands/New.h"
#include "../Commands/Load.h"
#include "../Commands/Save.h"
#include "../Commands/Dup.h"

std::map<const std::string,Icommand*> Factorial::m_commands = initCommands();

std::map<const std::string,Icommand*> Factorial::initCommands() {

    std::map<const std::string,Icommand*> temp;
    temp.insert(std::pair<const std::string,Icommand*>("new",new New));
    temp.insert(std::pair<const std::string,Icommand*>("dup",new Dup));
    temp.insert(std::pair<const std::string,Icommand*>("save",new Save));
    temp.insert(std::pair<const std::string,Icommand*>("load",new Load));

    return temp;
}

Icommand* Factorial::getCommand(const std::string &command) {
    return m_commands[command];
}