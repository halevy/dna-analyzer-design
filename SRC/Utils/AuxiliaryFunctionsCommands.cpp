//
// Created by a on 10/18/20.
//

#include "AuxiliaryFunctionsCommands.h"
#include "../Dnadata/ContainerDnaData.h"
#include <sstream>

DnaData* getDnaDataByString(const std::string &idByString) {

    std::stringstream f(idByString);
    size_t id;
    f >> id;
    return ContainerDnaData::getContainer().FindDnaData(id);
}

void print(const DnaData &dnaData){

    std::cout<<"["<<dnaData.getId()<<"] "<<dnaData.getName()<<": ";
    size_t length = dnaData.getDna().length();
    if( length > 40){

        std::cout<<dnaData.getDna().slice(0,32).GetData()<<"....";
        std::cout<<dnaData.getDna().slice(length-3,length).GetData()<<std::endl;
    }
    else{
        std::cout<<dnaData.getDna();
    }

}
