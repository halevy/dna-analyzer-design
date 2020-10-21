
#include "Load.h"
#include "../../Reader/file_reader.h"

void Load::run(std::vector<std::string> params) {

    FileReader fileReader(params[1]);
    std::string result = fileReader.read();
    std::string name;

    if(params.size() == 3){
        name = params[2];

    }
    else{
        size_t index = params[1].find('.');
        name = params[1].erase(index,params[1].length()-index);
    }

    name = getNameOfDna(name);
    createNewDna(result,name,'-');
}
