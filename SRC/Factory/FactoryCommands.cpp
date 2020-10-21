

#include "FactoryCommands.h"
#include "../Commands/Creation/New.h"
#include "../Commands/Creation/Dup.h"
#include "../Commands/Management/Save.h"
#include "../Commands/Creation/Load.h"
#include "../Commands/Analysis/Len.h"
#include "../Commands/Analysis/Find.h"
#include "../Commands/Analysis/Count.h"
#include "../Commands/Analysis/FindAll.h"
#include "../Commands/Management/Del.h"
#include "../Commands/Control/Quit.h"

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
    temp.insert(std::pair<const std::string,Icommand*>("del",new Del));
    temp.insert(std::pair<const std::string,Icommand*>("quit",new Quit));

    return temp;
}

Icommand* FactoryCommands::getCommand(const std::string &command) {

    return m_commands[command];
}

FactoryCommands::~FactoryCommands() {

    std::map<const std::string,Icommand*>::iterator it;

    for (it = m_commands.begin(); it != m_commands.end(); ++it)
        delete it->second;
}