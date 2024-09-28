#include <cstdlib>
#include <string>
#include <algorithm>



class Solution {
public:
    int reverse(int x) {
        if(x == 0){return x;}
        
        bool it_is_minus_number;
        if(x < 0){it_is_minus_number = true;}
        else{it_is_minus_number = false;}

        std::string something = std::to_string(x);
        std::reverse(something.begin(), something.end());

        int i = 0;
        if(something[0] == '0'){
            do{
                something[i] = ' ';
                i++;
            }while(something[i] == '0');
        }
        try{
            if(it_is_minus_number){
                int result = std::stoi(something);
                result = -result;
                return result;
            }
            else{int result = std::stoi(something); return result;}
        }
        catch(std::out_of_range){
            return 0;
        }

    };
};






#include <iostream>
int main(){
    int x = 1534236469;
    Solution solution;
    int result = solution.reverse(x);
    std::cout <<x <<std::endl; 
    std::cout <<result <<std::endl;
    std::cin.get();
    return 0;
}