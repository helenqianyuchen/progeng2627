#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile;
    infile.open("input.txt");

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
    outfile.open("output.txt");

    for(int i=v.size()-1; i<v.size(); i--){
        outfile << v[i] << std::endl;
    
    }
}