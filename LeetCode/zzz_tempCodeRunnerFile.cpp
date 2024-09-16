#include <cstdlib>
#include <string>
#include <algorithm>
#include <iostream>

long long int x = -101089231000;

class Solution {
public:
    int reverse(int x) {
        std::string something = std::to_string(x);
        bool it_is_minus_number;
        
        if (something[0] == '-'){it_is_minus_number == true;}
        
        something[0] = ' ';
        std::reverse(something.begin(), something.end());

        int i = 0;
        while(something[i] == '0'){
            i++;
            something[i] = ' ';
        } 

        std::cout <<something;
        return 0;
    };
};