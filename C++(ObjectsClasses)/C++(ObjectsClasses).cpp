// Objects - набор атрибутов и методов 
// Class - образец для создания объекта
#include <iostream>

class Human{
    public:
        std::string name = "Anonim";
        std::string job = "Anonim";
        int age = 1234;

        void eating(){
            std::cout <<"Eating..." <<'\n';
        }
        void drinking(){
            std::cout <<"Drinkig" <<std::endl;
        }
        void sleeping(){
            std::cout <<"Sleeping..." <<'\n';
        }
};

int main(){
    Human Kostya;
    //Kostya.name = "Kostya";
    Kostya.job = "Programming";
    Kostya.age = 14;

    std::cout <<"Hello " <<Kostya.name <<"!" <<'\n';
    std::cout <<"You working " <<Kostya.job <<'\n';
    std::cout <<"Aand you are " <<Kostya.age <<" years old" <<'\n';
    Kostya.eating();
    Kostya.drinking();
    Kostya.sleeping();
    std::cout <<"DONE";

return 0;
}