//
// Created by a on 7/5/20.
//
#include "cmd_reader.h"
#include <iostream>

const char* CmdReader::read() {
    std::cout << "\n>cmd>>>";
    char* command;
    std::cin >> command;
    return command;
}
