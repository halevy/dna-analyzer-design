//
// Created by a on 9/21/20.
//

#include "Analysis.h"

DnaData* Analysis::getDnaDataByString(const std::string &idByString) {

    std::stringstream f(idByString);
    size_t id;
    f >> id;
    return ContainerDnaData::getContainer().FindDnaData(id);
}