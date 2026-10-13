#include <iostream>

int main(){
    std::string text;
    bool state = true;
    std::cin>> text;
    
    while(state){
        if((text == "STOP") || (text == "Stop") || (text == "stop")){
            state = false;
        }
        else{
            std::cout << text << std::endl;
            std::cin >> text;
        }

    }

}