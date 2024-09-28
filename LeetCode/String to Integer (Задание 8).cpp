#include <algorithm>
#include <string>
#include <cstdlib>
#include <stdexcept>


class Solution{
public:
    int myAtoi(std::string s){
        std::string number_result;
        int i = 0;
        while(s[i] == ' '){
            i ++;
        }
        int do_not_more_one = 0;
        bool it_is_negative;

        for(i; i < s.size(); i++){
            if((s[i] == '-' || s[i] == '+' )&& do_not_more_one == 0){
                do_not_more_one = 1;
                if(s[i] == '-'){it_is_negative = true;}
                
                else{it_is_negative = false;} //! Только за счет этого условия у меня все заработало !!!
                
                continue;
            }
            else if((s[i] == '-' || s[i] == '+' )&& do_not_more_one == 1){break;}
            if(s[i] >= '0' && s[i] <='9'){
                do_not_more_one = 1;
                number_result += s[i];
            }
            else {break;}
        }

        // for(int i = 0; i < number_result.size(); i++){
        //     if(number_result[i] == '0'){number_result.erase(i, 1);} // как я могу удалить эту переменную, не заменяя ее на ' ' это?
        //     else{break;}
        // }
        if (!number_result.empty()) {
            while(number_result.size() > 1 && number_result[0] == '0'){
                number_result.erase(0, 1);
            }
        }
        else{return 0;}

        int result;
        try{
            if(it_is_negative){
                result = std::stoi(number_result);
                result = -result;
                return result;
            }
            else{result = std::stoi(number_result); return result;}
        }
        catch(std::out_of_range){
            if(it_is_negative){return -2147483648;}
            else{return INT_MAX;}
        }
    }
};

#include <iostream>
int main(){
    std::string s = "-91283472332";
    Solution solution;
    std::cout << solution.myAtoi(s) << std::endl;

    // std::string something = "      9158125300";
    // std::cout <<solution.myAtoi(something) <<std::endl;


    std::cin >>s;
    std::cin.get();
}