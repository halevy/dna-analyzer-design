//
// Created by a on 7/6/20.
//
#include "file_reader.h"
#include <fstream>
#include <iostream>

FileReader::FileReader(const std::string& fileName):m_fileName(fileName){}

std::string FileReader::read(){
    std::ifstream file(m_fileName.c_str());
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

    return new_line;
}

