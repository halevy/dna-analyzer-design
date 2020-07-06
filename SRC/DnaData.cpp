//
// Created by a on 7/5/20.
//
#include "DnaData.h"
DnaData::DnaData(const char *dna, const char *name):m_dna(DnaSequence(dna)),m_name(name) {
    static size_t id = 1;
    m_id = id++;
}

