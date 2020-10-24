

#include "FindAll.h"

void FindAll::run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer) {

    DnaData* dnaData = getDnaDataByString(params[1]);
    std::list<size_t > indexes = dnaData->getDna().FindAll(getDnaSequence(params[2]));
    if(!indexes.size()){
        throw std::invalid_argument("Not found");
    }
    std::string result;
    for (std::list<size_t>::iterator it = indexes.begin(); it != indexes.end(); ++it){
        result += getNumAsString(*it + 1) + " ";

    }
    result += "\n";
    writer->write(result.c_str());


}