//
// Created by a on 7/6/20.
//

#ifndef SRC_FILE_READER_H
#define SRC_FILE_READER_H
#include "Ireader.h"

class FileReader:public Ireader{
private:
    std::string m_fileName;
public:
    FileReader(const std::string& fileName);
    std::string read();
};

#endif //SRC_FILE_READER_H
