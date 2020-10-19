//
// Created by a on 7/6/20.
//

#ifndef SRC_CMD_WRITER_H
#define SRC_CMD_WRITER_H

#include "Iwriter.h"

class CmdWriter: public Iwriter{

public:
    void write(const char* resultCommand);
};
#endif //SRC_CMD_WRITER_H
