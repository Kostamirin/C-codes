#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t; // Это значит что вместо ~int можно использовать ~number_t

// рекомендуется испольовать ~using :
using number_t = int;

int main(){
    // Это можно заменить на ~text_t firstName
    std::string firstName = "Bro";
    number_t age = 21;
    
    std::cout <<firstName <<'\n';
    std::cout <<"You are " <<age <<" years old" <<'\n';

    return 0;
}