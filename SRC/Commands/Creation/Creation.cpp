
#include "Creation.h"


void Creation::createNewDna(const std::string &dna, const std::string &name, char status,Iwriter* writer) {

    DnaData* dnaData = new DnaData(dna,name,status);
    ContainerDnaData::getContainer().Insert(dnaData);
    print(*dnaData,writer);
}

const std::string& Creation::getNameOfDna(std::string &name) {

    try{
        size_t  num,id = ContainerDnaData::getContainer().FindId(name);
        DnaData* dnaData = ContainerDnaData::getContainer().FindDnaData(id);
        num = dnaData->getCounter();
        std::stringstream ss;
        ss << name << '_' << num ;
        name = ss.str();
    }
    catch(std::invalid_argument& e){}

    return name;
}