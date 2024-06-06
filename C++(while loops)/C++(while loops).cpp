#include <iostream>

int main(){
    std::string name;
    std::string useless;
    std::cin >>name;
    int dop = 0;
    
    while (name.empty()){  // Это означает что действие будет повторяться пока ~name пустое            
        std::cout <<"Please, enter your name: " <<'\n';
        std::cin >>name;
    }
    std::cout <<"Hello " <<name <<". How are you?";
    // И дальше чисто отсебятина...
    std::cin >>useless;
    std::cout <<"Cool! I think that you don`t using ban words. Yup???"
}
