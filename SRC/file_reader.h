//
// Created by a on 7/6/20.
//

#ifndef SRC_FILE_READER_H
#define SRC_FILE_READER_H
#include "Ireader.h"

class FileReader:public Ireader{
private:
    const char* m_fileName;
public:
    FileReader(const char* fileName);
    const char* read();
};

#endif //SRC_FILE_READER_H
