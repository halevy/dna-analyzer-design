//
// Created by a on 10/18/20.
//

#ifndef DNA_AUXILIARYFUNCTIONS_H
#define DNA_AUXILIARYFUNCTIONS_H

#include "../Dnadata/DnaData.h"
#include "../Reader/Ireader.h"
#include "../Writer/Iwriter.h"

DnaData* getDnaDataByString(const std::string& idByString);
void print(const DnaData& dnaData,Iwriter* writer);
std::string invalidResponse(Ireader* reader,Iwriter* writer);
std::string confirm(Ireader* reader,Iwriter* writer);
std::string getNumAsString(size_t num);

#endif //DNA_AUXILIARYFUNCTIONS_H
