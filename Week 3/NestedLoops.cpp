#include <iostream>

int main(){
    int n, c=0, c2=0;
    std::cin >> n;

    while(c2<n){

        while(c<n){
            c++;
            std::cout<< "*";
        }

        c2++;
        std::cout << std::endl;
        c=0;

    }

}
