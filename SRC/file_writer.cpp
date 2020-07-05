//
// Created by a on 7/1/20.
//
#include "file_writer.h"
#include <fstream>
#include <iostream>

FileWriter::FileWriter(const char* fileName):m_fileName(fileName){}

void FileWriter::write(const char* dnaSequence){
    try{
        std::ofstream myfile;
        myfile.open (m_fileName);
        myfile << dnaSequence <<"\n";
        myfile.close();
    }

    catch (std::ofstream::failure& e) {
        std::cout << "Exception opening/writing/closing file\n";
    }

}
