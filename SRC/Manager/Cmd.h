//
// Created by a on 7/6/20.
//

#ifndef SRC_CMD_H
#define SRC_CMD_H

#include "../Writer/Iwriter.h"
#include "../Reader/Ireader.h"

class Cmd{
private:
    Ireader* m_reader;
    Iwriter* m_writer;
public:
    Cmd(Ireader* reader,Iwriter* writer);
    void start();

};

#endif //SRC_CMD_H
