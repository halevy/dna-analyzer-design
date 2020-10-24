

#include "Dup.h"
#include <vector>
#include <sstream>


void Dup::run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer) {

    std::stringstream f(params[1]);
    size_t id;
    f >> id;
    DnaData* dnaData = ContainerDnaData::getContainer().FindDnaData(id);
    std::string name;
    if(params.size() == 3){
        name = params[2];

    }
    else{
        name = dnaData->getName();
    }
    name = getNameOfDna(name);
    createNewDna(dnaData->getDna().GetData(),name,'0',writer);

}
