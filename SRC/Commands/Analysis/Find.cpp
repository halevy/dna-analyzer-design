

#include "Find.h"

void Find::run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer) {

    DnaData* dnaData = getDnaDataByString(params[1]);
    size_t index = dnaData->getDna().find(getDnaSequence(params[2])) + 1;
    std::string result = getNumAsString(index) + "\n";
    writer->write(result.c_str());

}