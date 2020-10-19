//
// Created by a on 7/6/20.
//
#include "Creation.h"
void Creation::print(const DnaData &dnaData){

    std::cout<<"["<<dnaData.getId()<<"] "<<dnaData.getName()<<": ";
    size_t length = dnaData.getDna().length();
    if( length > 40){

        std::cout<<dnaData.getDna().slice(-1,32).GetData()<<"....";
        std::cout<<dnaData.getDna().slice(length-4,length).GetData();
    }
    else{
        std::cout<<dnaData.getDna();
    }

}