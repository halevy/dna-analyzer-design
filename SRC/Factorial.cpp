//
// Created by a on 7/6/20.
//

#include "Factorial.h"
#include "string.h"
#include "New.h"
#include "Load.h"
#include "Save.h"
#include "cmd_writer.h"


Factorial::Factorial(std::vector<char *> params) {

    std::vector<Icommand*> commands(3);
    int flags[3] = {0,0,0};
    if(!strcmp(params[0],"new")){
        if(!flags[0]){
            commands[0] = new New;
            m_commandOutput = commands[0]->run(params);
            flags[0] = 1;
        }
        else{
            m_commandOutput = commands[0]->run(params);
        }
    }
    else if(!strcmp(params[0],"load")){
        if(!flags[1]){
            commands[1] = new Load;
            m_commandOutput = commands[1]->run(params);
            flags[1] = 1;
        }
        else{
            m_commandOutput = commands[1]->run(params);
        }
    }
    else if(!strcmp(params[0],"save")){
        if(!flags[2]){
            commands[2] = new Save;
            m_commandOutput = commands[2]->run(params);
            flags[2] = 1;
        }
        else{
            m_commandOutput = commands[2]->run(params);
        }
    }
    else{
        CmdWriter cmdWriter;
        cmdWriter.write("There is no such command");
    }
}
const char* Factorial::getCommandOutput() {
    return m_commandOutput;
}

