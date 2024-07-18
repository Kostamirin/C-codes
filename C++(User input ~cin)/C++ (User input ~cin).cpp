#include <iostream>
#include <string>

int main(){
    int age;
    
    std::string name; // Задается переменная ~name без какого-либо зачения
    std::cout <<"What`s your name?:";
    //std::cin >>name; // Теперь то что мы напишем будет сохранено как переменная "name"
    // Для того чтобы сохранять предлежения с пробелами используется ~std::getline(std::cin, name)
    std::getline(std::cin, name);
    std::cout <<"What`s your age?:";
    std::cin >>age;
    /* 
        Если ~std::cout <<What`s your age?: будет раньше чем вопрос имени, то
    *Во избежание ошибок:
        std::getline(std::cin >>STD::WS, name)    
    */

    std::cout <<"Hello " <<name <<" "  <<age <<" years old. Good luck!" <<std::endl; 

    return 0;
}