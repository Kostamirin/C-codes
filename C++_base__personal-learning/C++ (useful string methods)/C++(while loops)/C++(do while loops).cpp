#include <iostream>

int main(){
    int number;
    do{   // Действие произходит в какой-то период 
        std::cout <<"Enter the positive number: ";
        std::cin >>number;

    }while(number < 0);  // НО повторяться оно будет только при определенных условиях
    std::cout <<"Your # is " <<number <<'\n';

    return 0;
}