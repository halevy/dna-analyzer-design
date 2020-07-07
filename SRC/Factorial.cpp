//
// Created by a on 7/6/20.
//

#include "Factorial.h"
#include "string.h"
#include "New.h"
#include "Load.h"
#include "Save.h"
#include "cmd_writer.h"


Factorial::Factorial(std::vector<std::string> params) {

    std::vector<Icommand*> commands(3);
    int flags[3] = {0,0,0};
    if(!strcmp(params[0].c_str(),"new")){
        if(!flags[0]){
            commands[0] = new New;
            commands[0]->run(params);
            flags[0] = 1;
        }
        else{
            commands[0]->run(params);
        }
    }
    else if(!strcmp(params[0].c_str(),"load")){
        if(!flags[1]){
            commands[1] = new Load;
            commands[1]->run(params);
            flags[1] = 1;
        }
        else{
            commands[1]->run(params);
        }
    }
    else if(!strcmp(params[0].c_str(),"save")){
        if(!flags[2]){
            commands[2] = new Save;
            commands[2]->run(params);
            flags[2] = 1;
        }
        else{
            commands[2]->run(params);
        }
    }
    else{
        std::cout<<"There is no such command"<<std::endl;
    }
}


