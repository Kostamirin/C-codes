#include <iostream>

int main(){
    int *pointer = nullptr;  //В данной строке ~pointer присваивается нулевое/никакое значение 
    int x = 123;

    pointer = &x;   // Здесь присваивается какое-то значение, следовательно без присваивания оно останется нулевым

    if(pointer == nullptr){  // Здесь проверяется значение "Является ли pointer нулевым"
        std::cout <<"The pointer is NULL" <<'\n';
    }
    else{
        std::cout <<"The pointer is assigned!" <<'\n';
        std::cout <<*pointer <<'\n';
    }
    
    return 0;
}