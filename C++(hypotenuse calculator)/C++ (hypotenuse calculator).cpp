#include <iostream>
#include <cmath>

int main(){
    int a;
    int b;
    int c;
    
    std::cout <<"Enter side A:";
    std::cin >>a;

    std::cout <<"Enter side B:";
    std::cin >>b;

    a =pow(a,2);
    b = pow(b,2);
    c = sqrt(a + b);

    std::cout <<"Side C = " <<c <<std::endl;

    return 0;
}