//
// Created by a on 7/6/20.
//

#ifndef SRC_FACTORIAL_H
#define SRC_FACTORIAL_H
#include <vector>

class Factorial{
    const char* m_commandOutput;
public:
    Factorial(std::vector<char*> params);
    const char* getCommandOutput();
};
#endif //SRC_FACTORIAL_H
