//
// Created by a on 10/18/20.
//

#include "AuxiliaryFunctionsCommands.h"
#include "../Dnadata/ContainerDnaData.h"
#include <sstream>


DnaData* getDnaDataByString(const std::string &idByString) {

    std::stringstream f(idByString);
    size_t id;
    f >> id;
    return ContainerDnaData::getContainer().FindDnaData(id);
}

void print(const DnaData &dnaData,Iwriter* writer){

    std::string result = "[" + getNumAsString(dnaData.getId()) + "] " + dnaData.getName() + ": ";
    size_t length = dnaData.getDna().length();
    if( length > 40){

        std::stringstream ss;
        ss << dnaData.getDna().slice(0,32).GetData()<<"...."
        <<dnaData.getDna().slice(length-3,length).GetData();
        result += ss.str() + "\n";

    }
    else{

        std::string dnaSequence = dnaData.getDna().GetData();
        result += dnaSequence + "\n";
    }

    writer->write(result.c_str());

}

std::string invalidResponse(Ireader* reader,Iwriter* writer){


    std::string toPrint = "You have typed an invalid response. Please either confirm by 'y'/'Y',";
    toPrint += "\nor cancel by 'n'/'N'.\n>confirm>>>";
    writer->write(toPrint.c_str());

    return reader->read();

}

std::string confirm(Ireader* reader,Iwriter* writer){

    writer->write(" Please confirm by 'y' or 'Y', or cancel by 'n' or 'N'.\n>confirm>>>");

    return reader->read();

}

std::string getNumAsString(size_t num) {

    std::stringstream ss;
    ss << num;
    return ss.str();
}