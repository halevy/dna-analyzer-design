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
#include "../Params/ManagementParams/SaveParams.h"
#include "../Params/ManagementParams/DelParams.h"
#include "../Params/ControlParams/QuitParams.h"

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
    temp.insert(std::pair<const std::string,Iparams*>("save",new SaveParams));
    temp.insert(std::pair<const std::string,Iparams*>("del",new DelParams));
    temp.insert(std::pair<const std::string,Iparams*>("quit",new QuitParams));

    return temp;
}

Iparams* FactoryParams::getParam(const std::string &command) {

    if(m_params.find(command) == m_params.end()){
        throw std::invalid_argument("Command not found");
    }
    return m_params[command];
}

FactoryParams::~FactoryParams() {

    std::map<const std::string,Iparams*>::iterator it;

    for (it = m_params.begin(); it != m_params.end(); ++it)
        delete it->second;
}