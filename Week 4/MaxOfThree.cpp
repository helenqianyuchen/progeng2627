#include <iostream>

int max(int a,int b, int c){

    if((a>=b)&&(a>=c)){
        return a;
    }
    else if ((b>=a)&&(b>=c)){
        return b;
    }
    else{
        return c;
    }

}

int main(){
    int a,b,c;
    std::cout << "please enter a: " << std::endl;
    std::cin >> a;
    std::cout << "please enter b: " << std::endl;
    std::cin >> b;
    std::cout << "please enter c: " << std::endl;
    std::cin >> c;

    std::cout << "the max is: " << max(a,b,c) <<std::endl;

}