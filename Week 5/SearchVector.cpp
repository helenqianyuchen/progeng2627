#include <iostream> 
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    for(int i=0; i<vin.size();i++){
        if(vin[i]==n){
            return i;
        }
    }
    return -1;
}


int main(){
    int n;
    std::cout << "please enter your number: " <<std::endl;
    std:: cin >> n;

    std::vector <int> v{1,4,7,2,4,5};

    std::cout << search_vector(n,v) << std::endl;


}