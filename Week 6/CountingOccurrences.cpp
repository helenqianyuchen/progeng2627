#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>

// Function to read the text file and store its words in a vector
std::vector<std::string> readText(std::string filename){

    std::ifstream infile(filename);

    std::vector<std::string> text;
    std::string word;

    if(!infile.is_open()){
        std::cout << "Error opening text file" << std::endl;
        exit(EXIT_FAILURE);
    }

    while(infile >> word){
        text.push_back(word);
    }

    infile.close();

    return text;
}


// Function to read the words we want to count
std::vector<std::string> readWords(std::string filename){

    std::ifstream infile(filename);

    std::vector<std::string> words;
    std::string word;

    if(!infile.is_open()){
        std::cout << "Error opening words file" << std::endl;
        exit(EXIT_FAILURE);
    }

    while(infile >> word){
        words.push_back(word);
    }

    infile.close();

    return words;
}


// Function to count how many times a word appears in the text
int countOccurrences(std::vector<std::string> text, std::string searchWord){

    int count = 0;

    for(int i = 0; i < text.size(); i++){

        if(text[i] == searchWord){
            count++;
        }

    }

    return count;
}


// Function to write the results to an output file
void writeOutput(std::string filename,
                 std::vector<std::string> text,
                 std::vector<std::string> words){

    std::ofstream outfile(filename);

    if(!outfile.is_open()){
        std::cout << "Error opening output file" << std::endl;
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < words.size(); i++){

        int count = countOccurrences(text, words[i]);

        outfile << words[i] << ": " << count << std::endl;

    }

    outfile.close();
}


int main(){

    std::string input1, input2, output;

    // Ask user for the input file names
    std::cout << "Please enter the text file: " << std::endl;
    std::cin >> input1;

    std::cout << "Please enter the words file: " << std::endl;
    std::cin >> input2;

    // Read the contents of both files
    std::vector<std::string> text = readText(input1);

    std::vector<std::string> words = readWords(input2);

    // Ask user for the output file name
    std::cout << "Please enter the output file name: " << std::endl;
    std::cin >> output;

    // Write the occurrence counts to the output file
    writeOutput(output, text, words);
}