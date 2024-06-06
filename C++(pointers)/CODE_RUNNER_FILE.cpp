#include <iostream>

int main(){
    std::string name = "Kostya";
    int age = 14;

    std::string *pName = &name; // Данная переменная содержит ссылку на name
    int *pAge = &age;
    std::string freePizza[5] = {"pizza 1", "pizza 2", "pizza 3", "pizza 4", "pizza 5"};
    std::string *pFreePizza = freePizza;

    std::cout <<"Hello " <<*pName <<'\n'; // Чтобы вывести изначальную переменную а не ее положение в 16-ричной системе используется * перед именем как и в ее создании
    std::cout <<"You are " <<*pAge <<" old" <<'\n';
    std::cout <<"Your pizza is here > " <<*pFreePizza <<'\n';
    
    return 0;
}