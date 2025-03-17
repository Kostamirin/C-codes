#include <iostream>

int main(){
    std::string first = "*****";
    int size = first.length();
    int save = size;
    while (size > 1)
    {
        std::cout << first << std::endl;
        first.pop_back();
        size--;

    }
    while (size <= save)
    {
        std::cout << first <<std::endl;
        first.append("*");
        size ++;
    }

    return 0;
}