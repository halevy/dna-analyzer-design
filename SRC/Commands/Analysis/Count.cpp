
#include "Count.h"

void Count::run(std::vector<std::string>& params,Ireader* reader,Iwriter* writer) {

    DnaData* dnaData = getDnaDataByString(params[1]);
    size_t count = dnaData->getDna().Count(getDnaSequence(params[2]));
    std::string result = getNumAsString(count) + "\n";
    writer->write(result.c_str());
}