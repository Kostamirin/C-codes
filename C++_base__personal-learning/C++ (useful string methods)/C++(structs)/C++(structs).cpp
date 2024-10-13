#include <iostream>

struct some{
    std::string name;
    double gpa;
    int age;
};

int main(){

    some some1;
    some1.name = "Kostya";
    some1.gpa = 3.2;
    some1.age = 14;
    //также можно присваивать 1 структуре разные значения
    some some2;
    some2.name = "Kley";
    some2.gpa = 2.3;
    some2.age = 24;


    std::cout <<"Hello " <<some1.name <<'\n';
    std::cout <<"You are " <<some1.age <<" years old!" <<'\n';
    std::cout <<some1.gpa <<'\n';
    std::cout <<'\n';
    
    std::cout <<"Hello " <<some2.name <<'\n';
    std::cout <<"You are " <<some2.age <<" years old!" <<'\n';
    std::cout <<some2.gpa <<'\n';


return 0;
}