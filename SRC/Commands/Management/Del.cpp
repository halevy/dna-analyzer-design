//
// Created by a on 10/14/20.
//

#include "Del.h"
#include "../../Utils/AuxiliaryFunctionsCommands.h"
#include <sstream>

void Del::run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer) {

    std::string answer;
    DnaData* dnaData = getDnaDataByString(params[1]);

    std::stringstream ss;
    ss << "Do you really want to delete " << dnaData->getName()
    <<":"<< getDnaSequence(dnaData);
    writer->write(ss.str().c_str());
    answer = confirm(reader,writer);

    if(answer != "n" && answer != "N"){
        if(answer != "y" && answer != "Y"){
            answer = invalidResponse(reader,writer);
        }

        if(answer == "y" || answer == "Y"){

            writer->write("Deleted :");
            print(*dnaData,writer);
            ContainerDnaData::getContainer().Erase(dnaData);
        }

    }



}