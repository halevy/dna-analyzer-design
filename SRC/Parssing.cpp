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
    try
    {
        if(m_params.size() < 2 )
            throw std::invalid_argument("invalid argument");
    }
    catch(std::invalid_argument& e)
    {
        std::cout<<"Exception!"<<e.what()<<std::endl;
    }

}
std::vector<std::string> Parssing::getParams() {
    return m_params;
}