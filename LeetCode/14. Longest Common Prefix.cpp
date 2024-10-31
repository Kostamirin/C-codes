#include <vector>
#include <string>


using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){return "";}
        std::string string1 = strs[0];
        std::string answer;

        for(int i = 0; i< string1.size(); i++){
            for(int j = 1; j < strs.size(); j++){
                if(strs[j][i] != string1[i]){
                    return answer;
                }
                else{continue;}
            }
            answer += string1[i];
        }

        return answer;
    }
};


#include<iostream>
int main(){
    Solution solution;
    vector<string> test = {"flower","flow","flowing"};
    std::cout <<solution.longestCommonPrefix(test) <<std::endl;
    std::cin.get();
    return 0;
}