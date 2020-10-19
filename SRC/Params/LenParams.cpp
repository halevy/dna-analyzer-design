//
// Created by a on 9/21/20.
//

#include "LenParams.h"

bool LenParams::isValid(std::vector<std::string> &params) {

//    try
//    {
//        if(params.size() > 2 || params.size() == 1 || params[1][0] != '#')
//            throw std::invalid_argument("invalid argument");
//
//    }
//    catch(std::invalid_argument& e)
//    {
//        std::cout<<"Exception!"<<e.what()<<std::endl;
//        return false;
//    }
    AnalysisParams::validSize(params.size(),2);
    AnalysisParams::isHashTag(params[1]);
    params[1].erase(0,1);

    return true;

}