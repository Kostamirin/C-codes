#include <iostream>

int main(){
    std::string name;
    std::cout <<"Enter your name: ";
    std::getline(std::cin, name);
    
    name.erase(1, 999999999);
    std::cout <<name <<'\n';
    
    return 0;
}