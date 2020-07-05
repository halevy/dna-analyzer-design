//
// Created by a on 7/5/20.
//

#ifndef DNA_CMD_WRITER_H
#define DNA_CMD_WRITER_H
#include "Iwriter.h"

class CmdWriter: public Iwriter{

public:
    void write(const char* resultCommand);
};
#endif //DNA_CMD_WRITER_H
