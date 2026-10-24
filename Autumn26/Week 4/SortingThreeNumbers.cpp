#include <iostream>

void myswap(double& s1, double& s2){

    int tmp;
    tmp = s1;
    s1 = s2;
    s2 = tmp;

}

void sort_three_numbers(double& s1, double& s2, double& s3){
    if(s1>s2){
        return myswap(s1,s2);
    }
    else{

    }

    if(s2>s3){
        return myswap(s2,s3);
    }

    if(s1>s3){
        return myswap(s1,s3);
    }
    else{
        
    }



}

int main(){
    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}