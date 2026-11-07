#include <iostream>

int main(){
    double n, counter=1, sum=0;
    std::cin >> n;

    while(n != 0){
        sum = sum + n;
        std::cout << "the average so far is: " << sum/counter << std::endl;
        counter= counter+1;
        std::cin >> n;
    }
}