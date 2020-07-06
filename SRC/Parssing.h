//
// Created by a on 7/6/20.
//

#ifndef SRC_PARSSING_H
#define SRC_PARSSING_H

#include <vector>

class Parssing{
private:
    std::vector<char*> m_params;
public:
    Parssing(const char* command);
    std::vector<char*> getParams();

};
#endif //SRC_PARSSING_H
