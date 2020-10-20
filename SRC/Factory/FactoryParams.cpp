//
// Created by a on 9/21/20.
//

#include "FactoryParams.h"
#include "../Params/CreationParams/NewParams.h"
#include "../Params/CreationParams/DupParams.h"
#include "../Params/CreationParams/LoadParams.h"
#include "../Params/AnalysisParams/CountParams.h"
#include "../Params/AnalysisParams/FindParams.h"
#include "../Params/AnalysisParams/LenParams.h"
#include "../Params/AnalysisParams/FindAllParams.h"

std::map<const std::string,Iparams*> FactoryParams::m_params = initParams();

std::map<const std::string,Iparams*> FactoryParams::initParams() {

    std::map<const std::string,Iparams*> temp;
    temp.insert(std::pair<const std::string,Iparams*>("new",new NewParams));
    temp.insert(std::pair<const std::string,Iparams*>("dup",new DupParams));
    temp.insert(std::pair<const std::string,Iparams*>("load",new LoadParams));
    temp.insert(std::pair<const std::string,Iparams*>("len",new LenParams));
    temp.insert(std::pair<const std::string,Iparams*>("find",new FindParams));
    temp.insert(std::pair<const std::string,Iparams*>("count",new CountParams));
    temp.insert(std::pair<const std::string,Iparams*>("findall",new FindAllParams));

    return temp;
}

Iparams* FactoryParams::getParam(const std::string &command) {
    return m_params[command];
}