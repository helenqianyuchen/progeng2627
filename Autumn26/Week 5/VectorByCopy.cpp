#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    int n, tmp;
    std::vector<double> v;
    std::cout << "please enter the number of elements: " << std::endl;
    std::cin >> n; 

    for(int j=0; j<n; j++){
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}