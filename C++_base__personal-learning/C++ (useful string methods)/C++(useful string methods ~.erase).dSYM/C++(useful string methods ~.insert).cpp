#include <iostream>

int main(){
    std::string name;
    std::cout <<"Enter your name: ";
    std::getline(std::cin, name);

    name.insert(0 , "#");
    name.append("#");
//теперь в начале и в конце будут хештеги (#)

    std::cout <<name <<'\n';
    
    return 0;
}