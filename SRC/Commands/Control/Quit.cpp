//
// Created by a on 10/14/20.
//

#include "Quit.h"
#include "../../Utils/AuxiliaryFunctionsCommands.h"

void Quit::run(std::vector<std::string> params) {

    std::string answer;

    std::cout<< "Are you sure you want to quit? ";
    answer = confirm();

    if(answer != "n" && answer != "N"){
        if(answer != "y" && answer != "Y"){
            answer = invalidResponse();
        }
        if(answer == "y" || answer == "Y"){
            std::cout<<"Thank you for using Dnalanyzer.\nGoodbye!\n";
            throw std::bad_exception();
        }
    }
}