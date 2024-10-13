#include <iostream>

class student{
public:
    std::string name;
    int age;
    double gpa;

    student(std::string name, int age, double gpa){
        this -> name = name;
        this -> age = age;
        this ->gpa = gpa;
    }
};


int main(){
    student student1("Kostya", 14, 4.1);

    std::cout <<"Hello student " <<student1.name <<" And " <<student1.age <<" years old" <<'\n';
    std::cout <<"Your GPA = " <<student1.gpa <<'\n';

return 0;    
}