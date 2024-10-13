#include <iostream>

int main(){
        srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    int sum = num1 + num2 + num3;

    std::cout <<num1 <<'\n';
    std::cout <<num2 <<'\n';
    std::cout <<num3 <<'\n';

    std::cout <<"Sum your points: ^" <<sum <<"^"<<'\n';
    return 0;
}