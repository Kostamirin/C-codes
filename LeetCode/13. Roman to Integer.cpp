#include <string>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int answer;
        int size = s.size();
        vector<pair<int, string>> values = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
            {1, "I"}
        };

        int i;
        for(auto &[number, symbol] : values){
            while(i < size){
                answer += number;
                s.erase(s.begin() + i);
                i ++;
                size -= symbol.size() ;
            }
        }
        return answer;
    }
};

class morning {
public:
    int romanToInt(string s) {
        int ans=0;
        unordered_map <char,int> mp{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    for(int i=0;i<s.size();i++){
        if(mp[s[i]]<mp[s[i+1]]){
            //for cases such as IV,CM, XL, etc...
            ans=ans-mp[s[i]];
        }
        else{
            ans=ans+mp[s[i]];
        }
    }
        return ans;
    }
};

#include <iostream>
int main(){
    morning solution;
    std::string main = "MCMXCIV";
    std::cout << solution.romanToInt(main) << std::endl;
    std::cin.get();
    return 0;
}