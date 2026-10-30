#include <iostream>
#include <vector>

int main(){
    int n, tmp, t;
    std::cout << "please enter a number: " << std::endl;
    std::cin >> n;

    std::vector <int> v;

    for (int i = 0; i<n; i++){
        std::cout << "please enter your sequence of numbers: " << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "please enter another number: " << std::endl;
    std::cin >> t;
    std::cout << "In your sequence, these numbers are less than " << t <<std::endl;

    for(int j=0; j<n; j++){
        if(v[j]<t){
            std::cout << v[j] <<std::endl;
        }
    }
}