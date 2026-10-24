#include <iostream>

void division(int a, int b, int& ans, int& rem){
    ans=a/b;
    rem=a%b;
}

int main(){
    int a,b;
    int ans,rem;

    std::cout << "Please enter your first number: " << std::endl;
    std::cin >> a;

    std::cout << "Please enter your second number: " << std::endl;
    std::cin >>b;

    division(a,b,ans,rem);

    std::cout << "The integer division is: " << ans << std::endl;
    std::cout << "The remainder is: " << rem << std::endl;
}