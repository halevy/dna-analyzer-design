//
// Created by a on 7/5/20.
//

#include "Load.h"
#include "file_reader.h"

const char* Load::run(std::vector<char*> params) {
    try
    {
        if(params.size() > 3 || (params.size() == 3 && params[2][0] != '@'))
            throw std::invalid_argument("invalid argument");
    }
    catch(std::invalid_argument& e)
    {
        std::cout<<"Exception!"<<e.what()<<std::endl;
    }
    FileReader fileReader(params[1]);
    const char* result = fileReader.read();
    if(params.size() == 3){

        m_conteiner.push_back(new DnaData(result,params[2]));
    }
    else{
        m_conteiner.push_back(new DnaData(result,""));
    }
}