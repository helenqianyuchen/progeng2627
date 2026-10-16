#include <iostream>

int main(){
    int n,curmax, counter = 0;
    std::cin >> n;
    curmax = n;

    while(n != 1){

        if(n % 2 == 0){
            n=n/2;
            counter ++;
            if(n>curmax){
                curmax = n;
            }
            std::cout << n;
            std::cout << "\t";
        }

        else if(n % 2 == 1){
            n=(n*3) + 1;
            counter  ++;
            if(n>curmax){
                curmax = n;
            }
            std::cout << n;
            std::cout << "\t";
        }
    }
    std::cout << std::endl;
    std::cout << curmax << std::endl;
}