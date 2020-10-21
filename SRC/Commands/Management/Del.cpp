//
// Created by a on 10/14/20.
//

#include "Del.h"
#include "../../Utils/AuxiliaryFunctionsCommands.h"

void Del::run(std::vector<std::string> params) {

    std::string answer;
    DnaData* dnaData = getDnaDataByString(params[1]);

    std::cout<< "Do you really want to delete " << dnaData->getName() <<":"<< getDnaSequence(dnaData)
    << " Please confirm by 'y' or 'Y', or cancel by 'n' or 'N'.\n>confirm>>>";
    getline(std::cin,answer);

    if(answer != "n" && answer != "N"){
        if(answer != "y" && answer != "Y"){
            std::cout<<"You have typed an invalid response. Please either confirm by 'y'/'Y',"
            <<"\nor cancel by 'n'/'N'.\n>confirm>>>";
            getline(std::cin,answer);
        }
        if(answer == "y" || answer == "Y"){
            std::cout<<"Deleted :";
            print(*dnaData);
//            std::cout<<"["<<dnaData->getId()<<"] "<<dnaData->getName()<<": ";
//            size_t length = dnaData->getDna().length();
//            if( length > 40){
//
//                std::cout<<dnaData->getDna().slice(0,32).GetData()<<"....";
//                std::cout<<dnaData->getDna().slice(length-3,length).GetData()<<std::endl;
//            }
//            else{
//                std::cout<<dnaData->getDna();
//            }
            ContainerDnaData::getContainer().Erase(dnaData);
        }

    }



}