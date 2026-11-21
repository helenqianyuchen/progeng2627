#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(int argc, char*argv[]){

    if(argc != 2){
        std::cout << "Please enter a file name" << std::endl;
        return EXIT_FAILURE;
    }

    std::ifstream infile;
    infile.open(argv[1]);
    
    std::vector <std::string> v;

    if(!infile.is_open()){
        std::cout << "Could not open file" << std::endl;
        return EXIT_FAILURE;
    }


    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp);
    }

    infile.close();

    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << std::endl;
    }


}