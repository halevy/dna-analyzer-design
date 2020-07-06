//
// Created by a on 7/5/20.
//

#ifndef AA_CONTEINERDNADATA_H
#define AA_CONTEINERDNADATA_H

#include "DnaData.h"
#include <vector>
class ConteinerDnaData{
private:
    std::vector<DnaData*> m_conteiner;
public:
    std::vector<DnaData*> getConteiner();
    void push_back(DnaData*);
};
#endif //AA_CONTEINERDNADATA_H
