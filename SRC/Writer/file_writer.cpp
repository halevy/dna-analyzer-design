//
// Created by a on 7/6/20.
//
#include "file_writer.h"
#include <fstream>
#include <iostream>

FileWriter::FileWriter(const std::string& fileName):m_fileName(fileName){}

void FileWriter::write(const std::string& dnaSequence){
    try{
        std::ofstream myfile;
        myfile.open (m_fileName.c_str());
        myfile << dnaSequence <<"\n";
        myfile.close();
    }

    catch (std::ofstream::failure& e) {
        std::cout << "Exception opening/writing/closing file\n";
    }

}
