#include <iostream>

int main(){
    int first;
    int second;
    std::cout <<"I`m a calkulator, but i can only sum numbers(((" <<std::endl;
    std::cout <<"Choose your first number:" <<std::endl;
    std::cin >>first;

    std::cout <<"Choose your second number:" <<std::endl;
    std::cin >>second;

   int sum = first + second;
    std::cout <<"Your sum = " <<sum <<std::endl;
    return 0;
 
}