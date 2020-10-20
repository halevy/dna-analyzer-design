
#ifndef DNA_DUPPARAMS_H
#define DNA_DUPPARAMS_H


#include "CreationParams.h"

class DupParams : public CreationParams{
public:
    bool isValid(std::vector<std::string>& params);
};


#endif //DNA_DUPPARAMS_H
