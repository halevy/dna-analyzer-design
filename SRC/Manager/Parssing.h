//
// Created by a on 7/6/20.
//

#ifndef SRC_PARSSING_H
#define SRC_PARSSING_H

#include <vector>
#include <string>
#include <sstream>

class Parssing{
private:
    std::vector<std::string> m_params;
public:
    Parssing(const std::string& command);
    std::vector<std::string> getParams();

};

#endif //SRC_PARSSING_H
