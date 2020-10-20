
#include "Save.h"
#include "../../Writer/file_writer.h"
#include <sstream>

void Save::run(std::vector<std::string> params) {

    std::string dna,fileName;

    params[1].erase(0,1);
    std::stringstream f(params[1]);
    size_t id;
    f >> id;
    fileName = ContainerDnaData::getContainer().FindDnaData(id)->getName();
    dna = ContainerDnaData::getContainer().FindDnaData(id)->getDna().GetData();

    if(params.size() == 2){
        std::string typeFile = ".rawdna";
        fileName += typeFile;
    }
    else{
        fileName = params[2];
    }
    
    FileWriter fileWriter(fileName);
    fileWriter.write(dna);

}

