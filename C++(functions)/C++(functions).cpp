#include <iostream>

void happyB(std::string name, int age);

int main(){
    std::string name = "Kostya";
    int age = 14;
    happyB(name, age);
    return 0;
}
void happyB(std::string name, int age){
        std::cout <<"Happy birthday to "<<name <<'\n';
        std::cout <<"Happy birthday to "<<name <<'\n';
        std::cout <<"Happy birthday to "<<name <<'\n';
        std::cout <<"You are "<<age <<" years old!\n";
}