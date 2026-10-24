#include <iostream>
#include <string>

void myswap(std::string& a, std::string& b){

    std::string tmp=a;
    a = b;
    b = tmp;

}

int main(){
    std::string a, b;

    std::cout << "please enter two values" << std::endl;
    std::cin >> a >> b;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << a << std::endl;
    std::cout << "n2: " << b << std::endl;

    myswap(a, b);

    std::cout << "after swapping:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
}



