#include <iostream>
#include <string>

int main(){
    int upper,lower, guess;
    std::string feedback;

    std::cout << "enter lower bound: " << std::endl;
    std::cin >> lower;

    std::cout << "enter upper bound: " << std::endl;
    std::cin >> upper;

    while( feedback != "correct"){
        guess = lower + (upper - lower) /2;
        std::cout << "is your number: " << guess << std::endl;
        std::cin >> feedback;

        if(feedback == "correct"){
            std::cout << "Your number is: " << guess << std::endl;
        }
        else if(feedback== "higher"){
            lower = guess+1;
        }

        else if(feedback == "lower"){
            upper= guess-1;
        }
    }
}
