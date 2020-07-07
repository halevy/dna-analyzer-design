//
// Created by a on 7/6/20.
//
#include "New.h"
#include <vector>
#include <sstream>

void New::run(std::vector<std::string> params) {
    try
    {
        if(params.size() > 3 || (params.size() == 3 && params[2][0] != '@') || params.size() == 1)
            throw std::invalid_argument("invalid argument");
    }
    catch(std::invalid_argument& e)
    {
        std::cout<<"Exception!"<<e.what()<<std::endl;
    }

    if(params.size() == 3){
        if(params[2][1] == '@'){
            params[2].erase(0,2);
        }
        else{
            params[2].erase(0,1);
        }
        DnaData dnaData(params[1],params[2],'0');
        ConteinerDnaData conteinerDnaData(dnaData);
        print(dnaData);
    }
    else{
        static size_t defaultNum = 1;
        std::stringstream ss;
        ss << "seq" << defaultNum ;
        DnaData dnaData(params[1],ss.str(),'0');
        ConteinerDnaData conteinerDnaData(dnaData);
        print(dnaData);
        defaultNum++;
    }

}
