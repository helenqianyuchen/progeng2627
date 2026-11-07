#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for(int c2=1; c2<=n; c2++){

        for(int c=1; c<=n; c++){
            std::cout << c*c2;
            std::cout << "\t";
        }
        std::cout << std::endl;


    }

}