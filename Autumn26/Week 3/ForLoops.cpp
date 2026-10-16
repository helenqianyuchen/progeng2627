#include <iostream>

int main(){
    int n, x, ans;
    std::cin >> x;
    std::cin >> n;
    ans= x;

    for(int i=1; i<n; i++){
        ans = ans*x;
        std::cout << ans << std::endl;
    }
}

