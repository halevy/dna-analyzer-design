//
// Created by a on 6/30/20.
//

#ifndef DNA_FILE_READER_H
#define DNA_FILE_READER_H

#include "Ireader.h"

class FileReader:public Ireader{
private:
   const char* m_fileName;
public:
    FileReader(const char* fileName);
    const char* read();
};

#endif //DNA_FILE_READER_H
