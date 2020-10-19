//
// Created by a on 9/22/20.
//

#include "CreationParams.h"

bool CreationParams::validSize(size_t size) {

    if(size < 2)
        throw std::invalid_argument(" Not enough parameters ");

    if(size > 3)
        throw std::invalid_argument(" Too much parameters ");

    return true;
}

bool CreationParams::isHashTag(std::string &idByString) {

    if(idByString[0] != '#')
        throw std::invalid_argument(" Missing hashTag");

    idByString.erase(0,1);

    return true;
}

void CreationParams::validArgs(std::vector<std::string> &params) {

    if(params.size() == 3 ){
        if(params[2][0] != '@'){
            throw std::invalid_argument(" Missing @");
        }
        if (params[2][1] == '@') {
            params[2].erase(0, 2);
        }
        else {
            params[2].erase(0, 1);
        }

    }



}