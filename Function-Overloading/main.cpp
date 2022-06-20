#include <iostream>
#include <cstring>


int max(int a, int b){
    std::cout << "int overload" << std::endl;
    return (a>b)? a : b; 
}

double max(double a, double b){
    std::cout << "double overload" << std::endl;
    return (a>b)? a : b; 
}

double max(int a, double b){
    std::cout << "(int,double) overload" << std::endl;
    return (a>b)? a : b; 
}

double max(double a, int b){
    std::cout << "(double,int) overload" << std::endl;
    return (a>b)? a : b; 
}
int main(){

    int x=6;
    int y=7;
    double a=2.3;
    double b=4.9;

    auto result = max(x,y);
    result =max(a,b);
    result= max(2.3,4);
    result= max(4,3.9);

    return 0;
}