#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){

    std::string textfilein, textfileout;

    std::cout << "Please enter your input file: " << std::endl;
    std::cin >> textfilein;
    std::cout << "Please enter your output file: " << std::endl;
    std::cin >> textfileout;

    std::ifstream infile;
    infile.open(textfilein);

    std::vector <int> v;

    if (!infile.is_open()){
        std::cout << "error opening file" <<std::endl;
        return EXIT_FAILURE;
    }
    int tmp;

    while(infile >> tmp){
        v.push_back(tmp);
    }

    infile.close();

    std::ofstream outfile;
    outfile.open(textfileout);

    for(int i=v.size()-1; i<v.size(); i--){
        outfile << v[i] << std::endl;
    }
}