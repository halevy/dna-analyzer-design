//
// Created by a on 7/6/20.
//
#include "cmd_reader.h"
#include "cmd_writer.h"
#include "Parssing.h"
#include "Factorial.h"
#include "Cmd.h"

void Cmd::start() {
    const char* result;
    CmdReader cmdReader;
    CmdWriter cmdWriter;
    int count = 10;
    while (count){
        result = cmdReader.read();
        Parssing parssing(result);
        Factorial factorial(parssing.getParams());
        cmdWriter.write(factorial.getCommandOutput());
        count--;
    }
}

