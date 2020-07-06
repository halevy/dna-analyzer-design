//
// Created by a on 7/6/20.
//
#include "Creation.h"
const char* Creation::getIdNameDnasequence(const DnaData &dnaData) {
    char* str = NULL;
    strcpy(str,"[");
    size_t id = dnaData.getId(),length = dnaData.getDna().length();
    strcat(str,(char*)&id);
    strcat(str,"] ");
    strcat(str,dnaData.getName());
    strcat(str,": ");
    if( length > 40){
        strcat(str,dnaData.getDna().slice(-1,32).GetData());
        strcat(str,dnaData.getDna().slice(length-4,length).GetData());
    }
    else{
        strcat(str,dnaData.getDna().slice(-1,length).GetData());
    }
    return str;
}