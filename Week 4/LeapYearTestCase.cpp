#include <iostream>
bool leap_year(int year){
    bool ly;

    if(year%4 ==0){
        return true;
    }

    else  if (year%100 ==0){
        return false;
    }

    else if (year%4 ==0){
        return true;
    }

    else{
        return false;
    }
}


int main(){
    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;
    std::cout << (leap_year(1800) == false) << std::endl;
    std::cout << (leap_year(1900) == false) << std::endl;
    std::cout << (leap_year(2000) == true) << std::endl;
    std::cout << (leap_year(2100) == false) << std::endl;
    std::cout << (leap_year(2200) == false) << std::endl;
    std::cout << (leap_year(2300) == false) << std::endl;
    std::cout << (leap_year(2400) == true) << std::endl;
    std::cout << (leap_year(2500) == false) << std::endl;
    std::cout << (leap_year(2600) == false) << std::endl;
    std::cout << (leap_year(2700) == false) << std::endl;
    std::cout << (leap_year(2800) == true) << std::endl;
    std::cout << (leap_year(2900) == false) << std::endl;
    std::cout << (leap_year(3000) == false) << std::endl;

}
