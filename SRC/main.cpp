#include <iostream>

#include "dnasequence.h"
#include "Cmd.h"
int main() {

    /*DnaSequence dna1("AT");
    std::cout << dna1 << std::endl;
    std::cout << dna1[1] << std::endl;
    std::string str = "ACT";
    DnaSequence dna2(str);
    std::cout << dna2 << std::endl;
    dna1 = dna2;
    std::cout << dna1 << std::endl;
    if(dna1 != dna2)
        std::cout << "not ok" << std::endl;
    else
        std::cout << "ok" << std::endl;
    dna1[0] = 'T';
    std::cout << dna1 << std::endl;
    dna1[0] = 'b';
    DnaSequence dna("ACww");
    DnaSequence dna3("ATGCTGATG");
    std::cout << dna1[3] << std::endl;
    std::cout <<"slice "<< dna3.slice(2,6) << std::endl;
    std::cout << "Pairing "<< dna2.Pairing() << std::endl;
    std::cout << dna2.find("AD") << std::endl;
    std::cout << dna2.find("AC") << std::endl;
    std::cout << dna3.Count("TG") << std::endl;
    std::cout << dna3.Count("CG") << std::endl;
    std::cout << dna3.find("TG",3) << std::endl;
    std::list<long > indexes = dna3.FindAll("TG");
    for (std::list<long>::iterator it = indexes.begin(); it != indexes.end(); ++it){
        std::cout << *it<<" ";
    }
    std::cout << std::endl;
    std::list<long > indexes2 = dna3.FindAll("TC");
    for (std::list<long>::iterator it = indexes2.begin(); it != indexes2.end(); ++it){
        std::cout << *it<<" ";
    }
    std::cout << std::endl;
    DnaSequence dna4("AATGAAATAGTATGGATGGGGCCCTAA");
    std::list<DnaSequence> Consensus = dna4.FindConsensus();
    for (std::list<DnaSequence>::iterator it = Consensus.begin(); it != Consensus.end(); ++it){
        std::cout << *it;
    }
    std::cout << std::endl;
    DnaSequence dna5("ATGTAGTATGGATGGGGCTAA");
    std::list<DnaSequence> Consensus2 = dna5.FindConsensus();
    for (std::list<DnaSequence>::iterator it = Consensus2.begin(); it != Consensus2.end(); ++it){
        std::cout << *it;
    }
    std::cout << std::endl;*/
    Cmd cmd;
    cmd.start();

    return 0;
}