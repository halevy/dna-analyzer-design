//
// Created by a on 10/14/20.
//

#include "Quit.h"
#include "../../Utils/AuxiliaryFunctionsCommands.h"

void Quit::run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer) {

    std::string answer;

    writer->write("Are you sure you want to quit? ");
    answer = confirm(reader,writer);

    if(answer != "n" && answer != "N"){
        if(answer != "y" && answer != "Y"){
            answer = invalidResponse(reader,writer);
        }
        if(answer == "y" || answer == "Y"){

            writer->write("Thank you for using Dnalanyzer.\nGoodbye!\n");
            throw std::bad_exception();
        }
    }
}