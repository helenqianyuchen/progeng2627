#include <iostream>

int max(int a,int b){

    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int a,b;
    std::cout << "please enter a: " << std::endl;
    std::cin >> a;
    std::cout << "please enter b: " << std::endl;
    std::cin >> b;

    std::cout << "the max is: " << max(a,b) <<std::endl;


}