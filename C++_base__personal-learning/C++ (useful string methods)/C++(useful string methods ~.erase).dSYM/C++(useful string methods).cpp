#include <iostream>

int main(){
    std::string name;

    std::cout <<"Enter your name: ";
    std::getline(std::cin, name);

    // ~name.length() - длина строки
    
    if(name.length() > 12){
        std::cout <<"Your name can`t be over 12 characters \n";
    } 
    else if(name.empty()){
        std::cout <<"You didn`t enter your name";
    }
    /*  ТАКЖЕ: есть ~name.clear() - что приводит к очищению переменной при любых значениях
    ...  int name;
        std::cin >>name;
        name.clear();
        std::cout <<name    -- не выведет ничего при любых записанных значениях
    */
    else{        
        name.append(" (I`m GAY LOL, and yeah, i know it)  ))))))");    
        std::cout <<"Welcome " <<name <<'\n';
    }
    return 0;
}