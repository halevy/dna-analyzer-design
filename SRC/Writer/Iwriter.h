//
// Created by a on 7/6/20.
//

#ifndef SRC_IWRITER_H
#define SRC_IWRITER_H

#include <string>

class Iwriter{
public:
    virtual void write(const char* dnaSequence) = 0;
    virtual ~Iwriter(){}
};
#endif //SRC_IWRITER_H
