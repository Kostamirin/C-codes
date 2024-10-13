#include <iostream>

int main(){
    // && - и в логических операциях
    // ||  -или в логических операциях
    // !  - не в логических операциях
    int temp; 
    bool sunny = true;
    
    std::cout <<"Enter the temperature: \n";
    std::cin >>temp;

    if(temp >0  && temp <30){
        std::cout <<"The temperature is good \n";
    }
    else {
        std::cout <<"The temperature is bad!\n";
    } 
    if (sunny){           //так же !(не)  можно использовать с ~bool переменными  то есть можно записать как ~!sunny (не ~sunny)
        std::cout <<"It is sunny outside! \n";
    }
    else {
        std::cout <<"It is cloudy outside! \n";
    }
}