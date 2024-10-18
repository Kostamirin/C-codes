#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    std::string intToRoman(int num) {
        std::string answer;
        //! Используется гениальный двойной вектор
        vector<pair<int, string>> values = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
            {1, "I"}
        };
        // Обращение к вектору выше с присваиванием локальных имен, которые будут использоваться
        for(auto &[number, symbol] : values){
            while(num >= number){
                answer += number;
                num -= number;
            }
        }
        return answer;
    }
};

#include <iostream>
int main(){
    Solution solution;
    int nums = 3749;
    std::string answer = "MMMDCCXLIX";
    bool c = answer == solution.intToRoman(nums);
    std::cout <<c <<std::endl;
    
    std::cin.get();
    return 0;
}