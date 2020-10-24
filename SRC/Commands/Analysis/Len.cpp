

#include "Len.h"


void Len::run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer) {

    DnaData* dnaData = getDnaDataByString(params[1]);
    std::string result = getNumAsString(dnaData->getDna().length()) + "\n";
    writer->write(result.c_str());

}