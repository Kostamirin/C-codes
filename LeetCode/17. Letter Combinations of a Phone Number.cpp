#include <vector>
#include <string>
#include <unordered_map>
//#include <functional>

using namespace std;
class Solution {
public:
    std::vector<std::string> letterCombinations(std::string digits) {
        vector<string> answer;
        if(digits.empty()){return answer;}
        unordered_map<char, string> base = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
            {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
            {'8', "tuv"}, {'9', "wxyz"}
        };

        answer.push_back("");
        for(char digit : digits){
            vector<string> temp;
            for(string s : answer){
                for(char c : base[digit]){
                    temp.push_back(s+c);
                }
            }
            answer = std::move(temp);
        }
        
        return answer;
    }
};

#include <iostream>
int main(){
    Solution solution;
    std::string digits = "532";
    std::vector<std::string> result = solution.letterCombinations(digits);
    std::cout <<result.size() <<std::endl <<std::endl;
    for(int i = 0; i < result.size(); i++){
        std::cout << result[i] <<"  ";
    }
    std::cin.get();
    return 0;
}