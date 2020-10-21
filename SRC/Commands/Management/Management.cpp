
#include "Management.h"


const char* Management::getDnaSequence(DnaData *dnaData) {

    return dnaData->getDna().GetData();
}
