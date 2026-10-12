#include <iostream>

int main(){
    double weight, height, bmi;
    std::cout << "Please enter your weight in kilograms" << std::endl;
    std::cin >> weight;

    std::cout << "Please enter your height in metres squared" << std::endl;
    std::cin >> height;

    bmi = weight / (height*height);
    std::cout << "Your BMI " << bmi << std::endl;

} 