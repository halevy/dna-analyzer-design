//
// Created by a on 7/5/20.
//
#include "Save.h"
#include "file_writer.h"
const char* Save::run(std::vector<char *> params) {
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
        FileWriter fileWriter(strcat(params[1],".rawdna"));
        fileWriter.write(params[1]);

    }


}

