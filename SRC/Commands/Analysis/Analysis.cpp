

#include "Analysis.h"

DnaData* Analysis::getDnaDataByString(const std::string &idByString) {

    std::stringstream f(idByString);
    size_t id;
    f >> id;
    return ContainerDnaData::getContainer().FindDnaData(id);
}

const char* Analysis::getDnaSequence(std::string &param) {

    if(param[0] != '#')
        return param.c_str();

    param.erase(0,1);
    return getDnaDataByString(param)->getDna().GetData();

}