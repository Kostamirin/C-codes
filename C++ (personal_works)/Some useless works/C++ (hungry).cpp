#include <iostream>

int main(){
    std::string hungry;

    std::cout <<"You are hungry?" ;
    std::cin >>hungry;

    hungry == "yes" || hungry == "yup"? std::cout <<"You are hungry LOL" <<'\n': std::cout <<"You are full" <<'\n';

    return 0;
}