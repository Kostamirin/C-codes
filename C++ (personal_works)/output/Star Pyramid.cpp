#include <iostream>

int main(){
    std::string first = "**********";
    std::string second = "*";
    int size = first.length();
    //int save = size;
    int i;
    while (i <= first.length())
    {
        std::cout <<second <<std::endl;
        second.append("*");
        i++;
    }
    while (i > 0)
    {
        std::cout <<first <<std::endl;
        first.pop_back();
        i--;
    }
    return 0;
}