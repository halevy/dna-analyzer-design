//
// Created by a on 10/18/20.
//

#ifndef DNA_AUXILIARYFUNCTIONS_H
#define DNA_AUXILIARYFUNCTIONS_H

#include "../Dnadata/DnaData.h"

DnaData* getDnaDataByString(const std::string& idByString);
void print(const DnaData& dnaData);
std::string invalidResponse();
std::string confirm();

#endif //DNA_AUXILIARYFUNCTIONS_H
