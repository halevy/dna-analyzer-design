//
// Created by a on 7/6/20.
//
#include "Save.h"
#include "file_writer.h"
#include <sstream>

void Save::run(std::vector<std::string> params) {
    try
    {
        if(params.size() > 3 || params.size() == 1 ||(params[1][0] != '#' && params[1][0] != '@'))
            throw std::invalid_argument("invalid argument");
    }
    catch(std::invalid_argument& e)
    {
        std::cout<<"Exception!"<<e.what()<<std::endl;
        return;
    }
    std::string dna,fileName;
    if(params[1][0] == '#') {
        params[1].erase(0,1);
        std::stringstream f(params[1]);
        size_t id;
        f >> id;
        dna = ContainerDnaData::getContainer().FindDnaData(id)->getDna().GetData();

    }
    else{
        params[1].erase(0,1);
        size_t id = ContainerDnaData::getContainer().FindId(params[1]);
        dna = ContainerDnaData::getContainer().FindDnaData(id)->getDna().GetData();

    }
    if(params.size() == 2){
        std::string typeFile = ".rawdna";
        fileName = dna + typeFile;
    }
    else{
        fileName = params[2];
    }
    FileWriter fileWriter(fileName);
    fileWriter.write(dna);

}

