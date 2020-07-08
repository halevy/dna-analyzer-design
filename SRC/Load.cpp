//
// Created by a on 7/6/20.
//
#include "Load.h"
#include "file_reader.h"

void Load::run(std::vector<std::string> params) {
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
    std::string result = fileReader.read();
    if(params.size() == 3){
        DnaData dnaData(result,params[2],'-');
        ContainerDnaData::getContainer().Insert(&dnaData);
        print(dnaData);
    }
    else{
        size_t index = params[1].find('.');
        DnaData dnaData(result,params[1].erase(index,params[1].length()),'-');
        ContainerDnaData::getContainer().Insert(&dnaData);
        print(dnaData);
    }
}
