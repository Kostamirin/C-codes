#include <iostream>

int factorial(int some);

int main(){
    int some;
    int result = 1;

    std::cout <<"Enter the number that you wonna to * :" ;
    std::cin >>some;

    result = factorial(some);


    std::cout  <<result <<'\n';

    
    return 0;
}

int factorial(int some){
    if(some > 1){
        return some * factorial(some - 1);
    }
    else{
        return 1;
    }
}