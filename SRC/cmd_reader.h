//
// Created by a on 7/6/20.
//

#ifndef SRC_CMD_READER_H
#define SRC_CMD_READER_H

#include "Ireader.h"

class CmdReader: public Ireader{

public:
    std::string read();
};
#endif //SRC_CMD_READER_H
