#include <iostream>
#include <vector>

int main(){
    int n, tmp, s, count=0;
    std::cout << "please enter a number: " << std::endl;
    std::cin >> n;

    std::vector <int> v;

    for (int i = 0; i<n; i++){
        std::cout << "please enter your sequence of numbers: " << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }


    std::cout << "please enter another number: " << std::endl;
    std::cin >> s;

    std::vector <int> indices;

    for(int j=0; j<n; j++){
        if(v[j]==s){
            count++;
            indices.push_back(j);
        }
    }

    if(count ==0){
        std::cout << "there are no occurences of " << s << std::endl;
    }
    else if(count==1){
        std::cout << "there is " << count << " occurence of " << s << " at indices " << std::endl;
        for(int k=0; k<indices.size(); k++){
            std::cout << indices[k];
        }
    }
    else{
        std::cout << "there are " << count << " occurences of " << s << " at indices " << std::endl;
        for(int k=0; k<indices.size(); k++){
            std::cout << indices[k] << std::endl;
        }
    }

}