
#include "Load.h"
#include "../../Reader/file_reader.h"

void Load::run(std::vector<std::string> params) {

    FileReader fileReader(params[1]);
    std::string result = fileReader.read();
    if(params.size() == 3){
        DnaData* dnaData = new DnaData(result,params[2],'-');
        ContainerDnaData::getContainer().Insert(dnaData);
        print(*dnaData);

    }
    else{
        size_t index = params[1].find('.');
        DnaData* dnaData = new DnaData(result,params[1].erase(index,params[1].length()),'-');
        ContainerDnaData::getContainer().Insert(dnaData);
        print(*dnaData);

    }
}
