//
// Created by a on 9/21/20.
//

#include "FactoryParams.h"
#include "../Params/NewParams.h"
#include "../Params/DupParams.h"
#include "../Params/LoadParams.h"
#include "../Params/LenParams.h"
#include "../Params/FindParams.h"

std::map<const std::string,Iparams*> FactoryParams::m_params = initParams();

std::map<const std::string,Iparams*> FactoryParams::initParams() {

    std::map<const std::string,Iparams*> temp;
    temp.insert(std::pair<const std::string,Iparams*>("new",new NewParams));
    temp.insert(std::pair<const std::string,Iparams*>("dup",new DupParams));
    temp.insert(std::pair<const std::string,Iparams*>("load",new LoadParams));
    temp.insert(std::pair<const std::string,Iparams*>("len",new LenParams));
    temp.insert(std::pair<const std::string,Iparams*>("find",new FindParams));

    return temp;
}

Iparams* FactoryParams::getParam(const std::string &command) {
    return m_params[command];
}