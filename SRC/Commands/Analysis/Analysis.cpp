

#include "Analysis.h"

const char* Analysis::getDnaSequence(std::string &param) {

    if(param[0] != '#')
        return param.c_str();

    param.erase(0,1);
    return getDnaDataByString(param)->getDna().GetData();

}