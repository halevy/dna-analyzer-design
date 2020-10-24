
#include "CreationParams.h"


void CreationParams::validArgs(std::vector<std::string> &params) {

    if(params.size() == 3 ){
        if(params[2][0] != '@'){
            throw std::invalid_argument("Missing @");
        }
        if (params[2][1] == '@') {
            params[2].erase(0, 2);
        }
        else {
            params[2].erase(0, 1);
        }

    }

}