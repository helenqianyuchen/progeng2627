#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>

// Function to read the advertisement file
std::vector<std::string> readAd(std::string input1){

    std::ifstream infile;
    infile.open(input1);

    if(!infile.is_open()){
        std::cout << "error opening file" << std::endl;
        exit(EXIT_FAILURE);
    }

    std::vector<std::string> ad;
    std::string tmp;

    while(infile >> tmp){
        ad.push_back(tmp);
    }

    infile.close();

    return ad;
}


// Function to read the real meanings file
std::vector<std::string> readTranslation(std::string input2){

    std::ifstream infile2;
    infile2.open(input2);

    if(!infile2.is_open()){
        std::cout << "error opening file" << std::endl;
        exit(EXIT_FAILURE);
    }

    std::vector<std::string> translation;
    std::string tmp2;

    while(infile2 >> tmp2){
        translation.push_back(tmp2);
    }

    infile2.close();

    return translation;
}


// Function to compare ad with the real meanings
void translateAd(std::vector<std::string> ad, std::vector<std::string> translation, std::string output){

    std::ofstream outfile;
    outfile.open(output);

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        exit(EXIT_FAILURE);
    }

    int j = 0;

    for(int i = 0; i < ad.size(); i++){

        for(j = 0; j < translation.size(); j += 2){

            if(ad[i] == translation[j]){
                outfile << translation[j+1] << " ";
                break;
            }

            if(j == translation.size()-2){
                outfile << ad[i] << " ";
            }
        }
    }

    outfile.close();
}

int main(){

    // Ask user for the text they want to translate and the real meanings
    std::string input1, input2, output;

    std::cout << "please enter your input file: " << std::endl;
    std::cin >> input1;

    std::cout << "please enter the real meaning file: " << std::endl;
    std::cin >> input2;

    // Read the contents of both files
    std::vector<std::string> ad = readAd(input1);

    std::vector<std::string> translation = readTranslation(input2);

    // Set up output file
    std::cout << "please enter the output file name: " << std::endl;
    std::cin >> output;

    // Translate the advertisement
    translateAd(ad, translation, output);
}