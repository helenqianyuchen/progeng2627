#include <iostream>

int smallest_factor(int n){

    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){
            return cf;
        }
        else{
            return 0;
        }
    }

}

int main(){
    int n;

    std::cout << "Please enter your number: " << std::endl;
    std::cin >> n;

    std::cout << smallest_factor(n) << std::endl;

}