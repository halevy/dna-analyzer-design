//
// Created by a on 7/5/20.
//
#include "New.h"
#include <vector>

const char* New::run(std::vector<char *> params) {
    try
    {
        if(params.size() > 3 || (params.size() == 3 && params[2][0] != '@'))
            throw std::invalid_argument("invalid argument");
    }
    catch(std::invalid_argument& e)
    {
        std::cout<<"Exception!"<<e.what()<<std::endl;
    }

    if(params.size() == 3){

        m_conteiner.push_back(new DnaData(params[1],params[2]));
    }
    else{
        m_conteiner.push_back(new DnaData(params[1],""));
    }
}
