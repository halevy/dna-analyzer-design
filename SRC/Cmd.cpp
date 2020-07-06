//
// Created by a on 7/5/20.
//

#include "cmd_reader.h"
#include "cmd_writer.h"
#include "parssing.h"
#include "factorial.h"
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

