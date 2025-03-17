// Created by kley-muner on 3/1/25.
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> answer = nums; // Create a copy of nums to work with
        if (answer.size() == 2)
        {
            if (answer[0] == 0 && answer[1]==0){return answer;}
            else if (answer[0] == 0){answer.push_back(0);answer.erase(answer.begin()); return answer;}
            else if (answer[0] == answer[1]){answer[0]*=2; answer[1]=0; return answer;}
            else {return answer;}
        }
        int n = answer.size();
        for (int i = 0; i < n-1; i++)
        {
            if (answer[i] == answer[i+1])
            {
                answer[i] *= 2;
                answer[i+1] = 0;
            }
        }
        //// Почему-то пропускает некоторые нули (возможно из-за изменения массива
        for (int i = 0; i < n; i++)
        {
            if (answer[i] == 0)
            {
                answer.push_back(0);
                answer.erase(answer.begin()+ i);
                if (any_of(answer.begin()+i, answer.end(), [](bool num){return num != 0;}))
                {
                    i--;
                }
            }
        }
        //* Добавление нулей до возвращения исходного размера
        while (answer.size() < n)
        {
            answer.push_back(0);
        }
        return answer;
    }
};

#include <iostream>
int main()
{
    Solution solution;
    std::vector<int> nums = {847,847,0,0,0,399,416,416,879,879,206,206,206,272};
    vector<int> answer = {1694,399,832,1758,412,206,272,0,0,0,0,0,0,0};
    vector<int> answer_my = solution.applyOperations(nums);
    std::cout <<'[';for (int i = 0; i < answer.size(); i++){std::cout <<answer[i] <<',';} std::cout <<']' <<std::endl;
    std::cout <<'[';for (int i = 0; i < answer_my.size(); i++){std::cout <<answer[i] <<',';} std::cout <<']' <<std::endl;

    return 0;
}