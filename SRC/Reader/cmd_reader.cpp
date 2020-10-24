//
// Created by a on 7/6/20.
//
#include "cmd_reader.h"
#include <iostream>

std::string CmdReader::read() {

    std::string command;
    getline(std::cin,command);
    return command;
}
