//
// Created by a on 7/6/20.
//

#include "Parssing.h"
#include <iostream>

Parssing::Parssing(const std::string& command) {

    std::stringstream str(command);
    std::string temp;
    while(str >> temp){
        m_params.push_back(temp);
    }

}
std::vector<std::string> Parssing::getParams() {
    return m_params;
}