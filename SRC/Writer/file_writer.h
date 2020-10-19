//
// Created by a on 7/6/20.
//

#ifndef SRC_FILE_WRITER_H
#define SRC_FILE_WRITER_H

#include <string>
#include "Iwriter.h"

class FileWriter:public Iwriter{
private:
    std::string m_fileName;
public:
    FileWriter(const std::string& fileName);
    void write(const std::string& dnaSequence);
};

#endif //SRC_FILE_WRITER_H
