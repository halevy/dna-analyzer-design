//
// Created by a on 7/6/20.
//

#ifndef SRC_CONTEINERDNADATA_H
#define SRC_CONTEINERDNADATA_H
#include "DnaData.h"
#include <map>

class ConteinerDnaData{
private:
    std::map<size_t ,std::string > m_nameWithId;
    std::map<std::string,DnaData> m_nameWithDnaData;

public:
    ConteinerDnaData(const DnaData& dnaData);


};
#endif //SRC_CONTEINERDNADATA_H
