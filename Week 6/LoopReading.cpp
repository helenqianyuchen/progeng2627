#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    if(infile.is_open()){ 
        int tmp, count=0;

        // the condition in the loop below is an idiomatic way
        // of reading from text files in C++ 

        // (infile >> tmp) at the same time performs the reading attempt
        // and returns a value that is evaluated as a boolean

        // if the reading attempt is successful then
        // the content is stored in tmp 
        // and what is returned
        // evaluates to true 
        // (so we keep going with the loop)

        // if the reading attempt is unsuccessful then
        // nothing new is stored in tmp
        // and what is returned
        // evaluates to false
        // (so the loop terminates)

        while(infile >> tmp){
            std::cout << tmp << std::endl;
            count=count + tmp;
        }

        infile.close(); 
        std::cout << "The sum is: " << count << std::endl;

    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}