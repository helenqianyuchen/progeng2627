#include <iostream>
#include <cmath>

double mypow(double x, int n){
    double result=1; 

    for(int i=0; i<n; i++){
        result = result*x;
    }

    if(n>=0){
        result = result;
    }

    else if (n<0){
        result= 1/result;
    }

    return result;
}

double sumpow(double x, int n){
    double sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+mypow(x, i);
    }
    return sum;
}
int main(){
    double x;
    int n;

    std::cout << "please enter your base,x: ";
    std::cin >> x;
    std::cout << "please enter your exponential,n: ";
    std::cin >> n;

    std::cout << sumpow(x,n);

}