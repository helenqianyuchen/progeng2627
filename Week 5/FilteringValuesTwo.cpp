#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i=0; i<vin.size();i++){
        if(vin[i]<t){
            vout.push_back(vin[i]);
        }
    }

}

int main(){
    double t;
    std::cout << "please enter a number: " << std::endl;
    std::cin >>t;

    std::vector <double> vin{0,1,2,3,4,5};
    std::vector <double> vout;

    filter_v(vin,t,vout);

    std::cout << "the numbers less than " << t << " are: ";

    for(int j=0;j<vout.size();j++){
        std::cout << vout[j];
    }

}