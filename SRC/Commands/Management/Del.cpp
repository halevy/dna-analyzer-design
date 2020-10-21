//
// Created by a on 10/14/20.
//

#include "Del.h"
#include "../../Utils/AuxiliaryFunctionsCommands.h"

void Del::run(std::vector<std::string> params) {

    std::string answer;
    DnaData* dnaData = getDnaDataByString(params[1]);

    std::cout<< "Do you really want to delete " << dnaData->getName()
    <<":"<< getDnaSequence(dnaData);
    answer = confirm();

    if(answer != "n" && answer != "N"){
        if(answer != "y" && answer != "Y"){
            answer = invalidResponse();
        }

        if(answer == "y" || answer == "Y"){
            std::cout<<"Deleted :";
            print(*dnaData);
            ContainerDnaData::getContainer().Erase(dnaData);
        }

    }



}