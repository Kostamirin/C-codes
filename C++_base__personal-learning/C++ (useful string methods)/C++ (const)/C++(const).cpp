#include <iostream>

int main(){
    //const делает переменную неизменяемой
    const double PI =3.14159;
    const int Light_Speed = 299792458;
    const int width = 1920;
    const int Height = 1080;
    double radius = 13;
    radius = 12;
    const double circumference = 2 * PI* radius;
    std::cout <<circumference <<std::endl;
    
    return 0;
}
