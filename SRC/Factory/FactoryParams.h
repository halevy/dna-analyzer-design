//
// Created by a on 9/21/20.
//

#ifndef DNA_FACTORYPARAMS_H
#define DNA_FACTORYPARAMS_H

#include <map>
#include <string>
#include "../Params/Iparams.h"

class FactoryParams {
private:
    static std::map<const std::string,Iparams*> m_params;
    static std::map<const std::string,Iparams*> initParams();
public:
    Iparams* getParam(const std::string& command);
};


#endif //DNA_FACTORYPARAMS_H
