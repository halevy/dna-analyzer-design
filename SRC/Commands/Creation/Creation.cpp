
#include "Creation.h"


void Creation::print(const DnaData &dnaData){

    std::cout<<"["<<dnaData.getId()<<"] "<<dnaData.getName()<<": ";
    size_t length = dnaData.getDna().length();
    if( length > 40){

        std::cout<<dnaData.getDna().slice(0,32).GetData()<<"....";
        std::cout<<dnaData.getDna().slice(length-3,length).GetData()<<std::endl;
    }
    else{
        std::cout<<dnaData.getDna();
    }

}

void Creation::createNewDna(const std::string &dna, const std::string &name, char status) {

    DnaData* dnaData = new DnaData(dna,name,status);
    ContainerDnaData::getContainer().Insert(dnaData);
    print(*dnaData);
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