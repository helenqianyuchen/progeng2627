#include <iostream>

void calculate(int length, int width, int&perimeter, int&area){


    perimeter = (2*length) + (2*width);
    area = length*width;
}

int main(){
    int length, width;
    int perimeter, area;

    std::cout << "enter the length" <<std::endl;
    std::cin >> length;

    std::cout << "enter the width" << std::endl;
    std::cin >> width;

    calculate(length,width,perimeter,area);

    std::cout << "Perimeter: " << perimeter <<std::endl;
    std::cout << "Area: " << area <<std::endl;
}