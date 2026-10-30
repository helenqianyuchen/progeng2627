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

    for(int j=0; j<n; j++){
        if(v[j]==s){
            count++;
        }
    }

    if(count ==0){
        std::cout << "there are no occurences of " << s << std::endl;
    }
    else if(count==1){
        std::cout << "there is " << count << " occurence of " << s << std::endl;
    }
    else{
        std::cout << "there are " << count << " occurences of " << s << std::endl;
    }

}