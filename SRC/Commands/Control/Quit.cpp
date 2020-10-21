//
// Created by a on 10/14/20.
//

#include "Quit.h"

void Quit::run(std::vector<std::string> params) {

    std::string answer;

    std::cout<< "Are you sure you want to quit? "
             << "Please confirm by 'y' or 'Y', or cancel by 'n' or 'N'.\n>confirm>>>";
    getline(std::cin,answer);

    if(answer != "n" && answer != "N"){
        if(answer != "y" && answer != "Y"){
            std::cout<<"You have typed an invalid response. Please either confirm by 'y'/'Y',"
                     <<" or cancel by 'n'/'N'.\n>confirm>>>";
            getline(std::cin,answer);
        }
        if(answer == "y" || answer == "Y"){
            std::cout<<"Thank you for using Dnalanyzer.\nGoodbye!\n";
            throw std::bad_exception();
        }
    }
}