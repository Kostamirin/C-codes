#include <string>
#include <algorithm>

class Solution {
public:
    bool isMatch(std::string s, std::string p) {
        int max = std::max(s.size(), p.size());

        for(int i =0; i < max; i++){
            if(s[i] == p[i]){
                continue;
            }
            else if(p[i] == '.'){
                continue;
            }
            else if(p[i] == '*'){
                int j = i + 1;
                if(p[i-1] = '.' && i >=0){
                    while(s[j] == s[i]){
                        j++;
                    }
                }
                while(/*! j >= 0 && */ s[j] == s[i]){
                    j++;
                }

                int extension = j - i;
                for(i; i < p.size(); i++){
                    if(s[j] == p[i]){continue;}
                }

            }
            else{return false;}
        }
    }
};


#include <iostream>
int main(){
    std::string first = "aaaabcdefg";
    std::string second = "a*bcdefg";
    Solution solution;
    std::cout << std::boolalpha << solution.isMatch(first, second) << std::endl;
    std::cin.get();
    return 0;
}