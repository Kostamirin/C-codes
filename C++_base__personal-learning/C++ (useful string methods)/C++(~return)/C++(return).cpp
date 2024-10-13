#include <iostream>
#include <cmath>

double square(double length); // Создадим програму которая будет вычислять площядь стороны квадрата зная его сторону
double cube(double length); //Создадим програму которая будет вычислять площадь КУБА зная его сторону

int main(){
    double length = 7.2;
    double area = square(length);
    double volume = cube(length);

    std::cout <<"Area: " <<area <<" cm^2 \n";
    std::cout <<"Volume: " <<volume <<" cm^3 \n";
}
double square(double length){ //Создается функция которая имеет переменную ~double length и возвращает/отдает(~return) функции значение ~length * length
    return pow(length, 2);  // То есть функция ~square будет иметь как таковое значение(length * length)
}
double cube(double length){
    return pow(length, 3); 
}