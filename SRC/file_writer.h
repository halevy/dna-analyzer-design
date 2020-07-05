//
// Created by a on 7/1/20.
//

#ifndef DNA_FILE_WRITER_H
#define DNA_FILE_WRITER_H
#include "Iwriter.h"

class FileWriter:public Iwriter{
private:
    const char* m_fileName;
public:
    FileWriter(const char* fileName);
    void write(const char* dnaSequence);
};
#endif //DNA_FILE_WRITER_H
