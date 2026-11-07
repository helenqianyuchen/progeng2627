#include <iostream>

bool leap_year(int year){
    bool ly;

    if(year%4 ==0){
        ly= true;
    }

    else  if (year%100 ==0){
        ly= false;
    }

    else if (year%4 ==0){
        ly= true;
    }

    else{
        ly= false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    d2=d1;
    m2=m1;
    y2=y1;

    int days;

    if (m1==2){
        if(leap_year(y1)){
            days=29;
        }
        else{
            days=28;
        }
    }
    else if( m1==4 || m1==6 || m1==9 || m1==11){
        days=30;
    }

    else{
        days=31;
    }

    if(d1<days){
        d2=d1+1;
    }

    else{
        d2=1;

        if(m1==12){
            m2=1;
            y2=y2+1;
        }
        else{
            m2=m1+1;
        }
    }
}


int main(){
    int d1,m1,y1;
    int d2,m2,y2;

    std::cout << "Enter your date: " << std::endl;
    std::cin >> d1 >> m1 >> y1;

    next_date(d1,m1,y1,d2,m2,y2);

    std::cout << "The next date is: " << d2 << "/" << m2 << "/" << y2;


}