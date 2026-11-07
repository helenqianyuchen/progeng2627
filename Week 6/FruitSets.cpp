#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>
void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout);
void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout);
int search_vector(std::string s, const std::vector<std::string>& vin);

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i<vin1.size(); i++){
        if(search_vector(vin1[i],vout)==-1){
            vout.push_back(vin1[i]);
        }
    }

    for(int j=0; j<vin2.size(); j++){
        if(search_vector(vin2[j], vout)==-1){
            vout.push_back(vin2[j]);
        }
    }
}


void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i<vin1.size();i++){
        if(search_vector(vin1[i],vin2)!=-1){
            if(search_vector(vin1[i],vout) ==-1){
                vout.push_back(vin1[i]);
            }
        }
    }
}

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i=0; i<vin.size(); i++){
        if (vin[i] ==s){
            return i;
        }
    }
    return -1;
};

int main(){

    std::string textfile1, textfile2;

    std::cout << "please enter your first text file: " << std::endl;
    std::cin >> textfile1;

    std::cout << "please enter your second text file: " << std::endl;
    std::cin >> textfile2;

    std::vector <std::string> v1;
    std::vector <std::string> v2;

    std::ifstream infile;
    infile.open(textfile1);

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    
    std::string tmp;

    while(infile >> tmp){
        v1.push_back(tmp);\
    }

    infile.close();



    std::ifstream infile2;
    infile2.open(textfile2);

    if(!infile2.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    
    std::string tmp2;

    while(infile2 >> tmp2){
        v2.push_back(tmp2);
    }

    infile2.close();

    std::vector <std::string> UnionOut;
    std::vector <std::string> IntersectionOut;

    union_vector(v1,v2,UnionOut);
    intersection_vector(v1,v2,IntersectionOut);

    std::ofstream outfile;
    outfile.open("union.txt");

    if(!outfile.is_open()){
        std::cout <<"error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i=0; i<UnionOut.size();i++){
        outfile << UnionOut[i] << std::endl;
    }
    outfile.close();

    std::ofstream outfile2;
    outfile2.open("intersection.txt");

    if(!outfile2.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for(int i=0; i<IntersectionOut.size(); i++){
        outfile2 << IntersectionOut[i] << std::endl;
    }
    outfile2.close();

}