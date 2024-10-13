#include <iostream>

class Animal
{
public:
    bool alive = true;
    void eat(){
        std::cout <<"The animal is eat" <<'\n';
    }
};

class Dog : public Animal
{
public:    
    void bark(){
        std::cout <<"The dog goes woof!" <<'\n';
    }

};

class Cat : public Animal
{
public:
void voice(){
    std::cout <<"The cat has say MEAW!" <<'\n';
}
};

int main(){
    Dog dog;
    std::cout <<dog.alive <<'\n';
    dog.eat();
    dog.bark();
    Cat cat;
    std::cout <<cat.alive <<'\n';
    cat.voice();

return 0;
}