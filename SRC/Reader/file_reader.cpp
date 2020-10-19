//
// Created by a on 7/6/20.
//
#include "file_reader.h"
#include <fstream>
#include <iostream>

FileReader::FileReader(const std::string& fileName):m_fileName(fileName){}

std::string FileReader::read(){


    std::ifstream file;
    std::string data;
    try {
        file.open(m_fileName.c_str());
        while(getline(file, data));
    }
    catch (const std::ofstream::failure &exeption){
        std::cout << exeption.what();
    }
    file.close();
    return data;

}

