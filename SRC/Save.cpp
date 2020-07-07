//
// Created by a on 7/6/20.
//
#include "Save.h"
#include "file_writer.h"
void Save::run(std::vector<std::string> params) {
    try
    {
        if(params.size() > 3 )
            throw std::invalid_argument("invalid argument");
    }
    catch(std::invalid_argument& e)
    {
        std::cout<<"Exception!"<<e.what()<<std::endl;
    }
    if(params.size() == 3){
        FileWriter fileWriter(params[2]);
        fileWriter.write(params[1]);
    }
    else{
        std::string typeFile = ".rawdna";
        FileWriter fileWriter( params[1] += typeFile);
        fileWriter.write(params[1]);

    }



}

