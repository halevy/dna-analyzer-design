//
// Created by a on 7/5/20.
//

#ifndef DNA_CMD_READER_H
#define DNA_CMD_READER_H

#include "Ireader.h"

class CmdReader: public Ireader{

public:
    const char* read();
};
#endif //DNA_CMD_READER_H
