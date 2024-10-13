#include <iostream>

class Stove{
private:       // Скывает от пользователя/программиста эти данные
    std::string name = "Kostya";
    int age = 14;

public:        // Для того, чтобы параметр выше был доступен используется ~return (параметр нельзя будет изменить, но он будет доступен для чтения из-за void)
    int getAge(){
        return age;
    }
    std::string setName(std::string name2){  //void присваивания тоже присутстует
        this->name = name2;
        return name2;   // Желательно оставить ~return
    }
    std::string getName(){
        return name;
    }
};

int main(){

    Stove stove;

    stove.setName("Igori");

    std::cout <<"Hello " <<stove.getName() <<'\n';
    std::cout <<"You are " <<stove.getAge() <<" years old" <<'\n';



return 0;
}