//
// Created by a on 7/5/20.
//

#ifndef DNA_PARSSING_H
#define DNA_PARSSING_H

#include <vector>

class Parssing{
private:
    std::vector<char*> m_params;
public:
    Parssing(const char* command);
    std::vector<char*> getParams();

};
#endif //DNA_PARSSING_H
