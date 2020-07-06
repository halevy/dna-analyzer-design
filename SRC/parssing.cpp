//
// Created by a on 7/5/20.
//
#include "parssing.h"
#include <string.h>
#include <iostream>

Parssing::Parssing(const char* command) {


    char* str;
    strcpy(str,command);
    char * pch;
    pch = strtok (str," ,.-");
    while (pch != NULL)
    {
        m_params.push_back(pch);
        pch = strtok (NULL, " ,.-");
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
std::vector<char*> Parssing::getParams() {
    return m_params;
}
