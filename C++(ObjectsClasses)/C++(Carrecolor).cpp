#include <iostream>

class Car{
public:    
    std::string model;
    std::string color;
    int year;

    void clear(){
        std::cout <<"The car is cleaning now" <<'\n';
    }
    void recolor( std::string Ncolor, std::string &color){
        color = Ncolor;
        std::cout <<"The car has been recolor";
    }
};

int main(){
    Car lamba;
    lamba.model = "Lamborginy";
    lamba.color = "Green";
    lamba.year = 2000;
    lamba.recolor("Yellow", lamba.color);
    
    std::cout <<lamba.model <<'\n';
    std::cout <<lamba.color <<'\n';
    std::cout <<lamba.year <<'\n';


return 0;
}