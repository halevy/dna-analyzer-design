//
// Created by a on 7/6/20.
//

#ifndef SRC_IREADER_H
#define SRC_IREADER_H

#include <string>
class Ireader{
public:
    virtual std::string read() = 0;
    virtual ~Ireader(){}
};
#endif //SRC_IREADER_H
