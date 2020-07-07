//
// Created by a on 7/6/20.
//
#include "cmd_reader.h"
#include "cmd_writer.h"
#include "Parssing.h"
#include "Factorial.h"
#include "Cmd.h"
#include <iostream>

void Cmd::start() {
    std::string result;
    CmdReader cmdReader;
    int count = 2;
    while (count){
        result = cmdReader.read();
        Parssing parssing(result);
        Factorial factorial(parssing.getParams());
        count--;
    }
}

