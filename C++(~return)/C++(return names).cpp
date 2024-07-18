#include <iostream>

std::string concat(std::string string1, std::string string2);

int main(){
    std::string firstName = "Kostya";
    std::string lastName = "Vlasov";
    std::string fullName = concat(firstName, lastName);

    std::cout <<"Hello " <<fullName <<'\n';
}

std::string concat(std::string string1, std::string string2){
    return string1 +" "+ string2;
}
