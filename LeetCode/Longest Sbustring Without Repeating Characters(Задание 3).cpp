#include <vector>
#include <string>
#include <iostream>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s){
        std::vector<int> n;
        std::vector<char> no_use;
        int lol;
        char something[] = {};
        for(int i = 0; i < s.length(); i++){
            something[i] = s[i];
        }
        //std::cout <<something <<std::endl ; 
        for(int i = 0; i <= s.length(); i++){
            if(std::find(no_use.begin(), no_use.end(), something[i]) == false){
                no_use.push_back(something[i]);
                lol += 1;
            }
            else{
                n.push_back(lol);
                lol = 0;
                no_use.clear();
            }
        }
        int max = *std::max_element(n.begin(), n.end());
        return max;
    };
}