//
// Created by a on 7/6/20.
//
#include "../Reader/cmd_reader.h"
#include "../Writer/cmd_writer.h"
#include "Parssing.h"
#include "Cmd.h"
#include <iostream>
#include "../Dnadata/ContainerDnaData.h"
#include "../Factory/Factorial.h"

void Cmd::start() {
    std::string result;
    CmdReader cmdReader;
    int count = 3;
    while (count){
        result = cmdReader.read();
        Parssing parssing(result);
        Factorial factorial;
        std::vector<std::string> params = parssing.getParams();
        factorial.getCommand(params[0])->run(params);
        count--;
    }

}

