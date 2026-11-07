#include <iostream>

int smallest_factor(int n){

    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){
            return cf;
        }
    }

    return 0;

}   

int main(){
    int lower, upper;

    std::cout << "Please enter your first number: " <<std::endl;
    std::cin >> lower;

    std::cout << "Please enter your second number: " <<std::endl;
    std::cin >> upper;

    for(int i=lower; i<=upper; i++){
        if ((i>=2) && (smallest_factor(i) ==0))
            std::cout << i << std::endl;
    }
}