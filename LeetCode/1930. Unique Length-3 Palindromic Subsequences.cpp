#include <string>


using namespace std;
class Solution {
public:
    int countPalindromicSubsequence(string s) {
      int answer = 0;
      for(int i = 0; i < s.length()-2; i++){
            for(int j = i + 1; j < s.length()-1; j++){
                for(int k = j + 1; k < s.length(); k++){
                    if(s[i] == s[j] && s[i] == s[k] && s[j] == s[k]){
                        answer += 1;
                    }
                }
            }
        }
        return answer;
    }
};

#include <iostream>
int main(){
    Solution solution;
    string s = "aabca";
    bool answer = solution.countPalindromicSubsequence(s) == 3;
    std::cout << solution.countPalindromicSubsequence(s) <<'\n';
    std::cout <<answer <<std::endl;
    cin.get();
    return 0;
}
