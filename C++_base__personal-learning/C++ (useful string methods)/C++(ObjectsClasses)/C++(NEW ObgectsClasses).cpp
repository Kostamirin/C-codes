#include <iostream>

class some{
private:
    std::string name;
    int age;
public:
some : name("Igori"), age(14){}

std::string getName(){
    return name;
}
int getAge(){
    return age;
}

};

int main(){
    some some;
    
    std::cout <<"Hello " <<some.getName <<'\n';
    std::cout <<"You are " <<some.getAge <<" years old!" <<'\n';


return 0;
}