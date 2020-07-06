//
// Created by a on 7/6/20.
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
        DnaData dnaData(params[1],params[2],'0');
        ConteinerDnaData conteinerDnaData(dnaData);
        return getIdNameDnasequence(dnaData);
    }
    else{
        DnaData dnaData(params[1],"",'0');
        ConteinerDnaData conteinerDnaData(dnaData);
        return getIdNameDnasequence(dnaData);
    }

}
