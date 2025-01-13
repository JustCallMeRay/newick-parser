//
// Created by LuoFan on 2019-12-19.
//
#include <iostream>
#include <fstream>
#include <sstream>

#include "NewickParser.h"


int main(){
    
    //char a[]="((E:0.1,(C:0.6,D:0.7):0.2):0.3,(A:0.9,B:1.0):0.8)";
    std::ifstream ifile;
    ifile.open("/Volumes/RamDisk/Download/metaphlan2.tree/tree.newick");
    std::stringstream buf;
    buf << ifile.rdbuf();
    
    std::string as(buf.str());
    Parser p(as);
    return 0;
}
