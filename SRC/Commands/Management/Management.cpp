
#include "Management.h"
#include <sstream>

DnaData* Management::getDnaDataByString(const std::string &idByString) {

    std::stringstream f(idByString);
    size_t id;
    f >> id;
    return ContainerDnaData::getContainer().FindDnaData(id);
}

const char* Management::getDnaSequence(DnaData *dnaData) {

    return dnaData->getDna().GetData();
}
