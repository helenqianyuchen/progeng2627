#include <iostream>

int main(){
    int n, ans;
    ans = 1;
    std::cin >> n;


    for(int i=1; i<=n; i++){
        
        ans = ans * i;
    }

    std::cout << ans << std::endl;

}