//
// Created by a on 7/6/20.
//
#include "file_reader.h"
#include <fstream>
#include <iostream>

FileReader::FileReader(const char* fileName):m_fileName(fileName){}

const char* FileReader::read(){
    std::ifstream file(m_fileName);
    std::string line;
    std::string new_line;
    try {
        while (getline(file, line)){
            new_line+=line;
        }
        file.close();
    }
    catch (std::ifstream::failure& e) {
        std::cout << "Exception opening/reading/closing file\n";
    }

    return new_line.c_str();
}

