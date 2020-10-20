//
// Created by a on 7/6/20.
//
#include "../Reader/cmd_reader.h"
#include "../Writer/cmd_writer.h"
#include "Parssing.h"
#include "Cmd.h"
#include <iostream>
#include "../Dnadata/ContainerDnaData.h"
#include "../Factory/FactoryCommands.h"
#include "../Factory/FactoryParams.h"

void Cmd::start() {
    std::string result;
    CmdReader cmdReader;
    FactoryCommands factoryCommands;
    FactoryParams factoryParams;
    std::vector<std::string> params;
    int count = 10;
    while (count){
        result = cmdReader.read();
        Parssing parssing(result);
        params = parssing.getParams();
        try{
            factoryParams.getParam(params[0])->isValid(params);
            factoryCommands.getCommand(params[0])->run(params);
            count--;
        }
        catch(std::invalid_argument& e)
        {
            std::cout<<"Exception!"<<e.what()<<std::endl;
        }

    }

}

