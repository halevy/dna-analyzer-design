//
// Created by a on 7/5/20.
//
#include "cmd_writer.h"
#include "iostream"

void CmdWriter::write(const char *resultCommand) {
    std::cout << "\n>cmd>>>" << resultCommand << std::endl;
}