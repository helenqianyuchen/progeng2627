#include <iostream> 
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    int count=0;

    if (vin.empty()){
        return -1;
    }

    for(int i=0; i<vin.size(); i++){
        if(vin[i]<vin[count]){
            count=i;
        }

    }

    return count;


}

int main(){
    std::vector <double> v{0,1,2};

    double expected=0;

    std::cout << min_vector_element(v);

}