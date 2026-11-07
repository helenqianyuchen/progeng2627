#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(){
    std::string textfile;
    std::cout << "please enter your text file name: " << std::endl;
    std::cin >> textfile;

    std::ifstream infile;
    infile.open(textfile);

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}