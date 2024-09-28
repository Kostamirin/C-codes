#include <algorithm>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string something = std::to_string(x);
        std::string reversed = something;
        std::reverse(reversed.begin(), reversed.end());
        if(something == reversed){return true;}
        else{return false;}
    }
};


#include <iostream>
int main(){
    Solution solution;
    int x = 1223221;
    int x2 = -121;
    std::cout <<solution.isPalindrome(x) <<std::endl;
    std::cout <<solution.isPalindrome(x2) <<std::endl;
    std::cout <<"Please press Enter to continue..."; std::cin.get();
    return 0;
}