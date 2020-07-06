//
// Created by a on 7/5/20.
//

#ifndef DNA_FACTORIAL_H
#define DNA_FACTORIAL_H

#include <vector>

class Factorial{
    const char* m_commandOutput;
public:
    Factorial(std::vector<char*> params);
    const char* getCommandOutput();
};
#endif //DNA_FACTORIAL_H
