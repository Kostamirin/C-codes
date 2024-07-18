#include <iostream>

int main(){
    int age;

    std::cout <<"Enter your age: ";
    std::cin >>age;
    if(age >=100){
        std::cout <<"You are too old to enter this site!" <<'\n';
    }
    
    else if(age>=18){
        std::cout <<"Welcome to the site!" <<'\n';
    }
    else if(age<0){
        std::cout <<"You haven`t born yet!" <<'\n';
    }
    else{
        std::cout <<"You are not old enough!" <<'\n';
    }

    return 0;
}