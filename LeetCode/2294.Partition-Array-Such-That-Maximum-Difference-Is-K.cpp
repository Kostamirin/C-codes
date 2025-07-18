// Created by kleymuner2131 on 19.06.25.
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end());
        int answer = 0;

        int pointer = 0;
        for (int i = 0; i <= nums.size() - 1; i = pointer)
        {
            int j = i;
            while (nums[j] - nums[i] <= k && j <= nums.size() - 1)
            {
                if (j == nums.size() - 1)
                {
                    return answer + 1;
                }
                j++;
            }
            pointer = j;
            answer++;
        }
        return answer;
    }
};



int main()
{
    Solution solution;
    vector<int> nums_1 = {3,6,1,2,5};
    int k_1 = 2;
    vector<int> nums_2 = {1,2,3};
    int k_2 = 1;
    vector<int> nums_3 = {2,2,4,5};
    int k_3 = 0;
    std::cout <<endl;

    int answer_1 = solution.partitionArray(nums_1, k_1);
    std::cout << "Needet output: 2" <<std::endl;
    std::cout << answer_1 << std::endl;

    int answer_2 = solution.partitionArray(nums_2, k_2);
    std::cout << "Needet output: 2" <<std::endl;
    std::cout << answer_2 <<std::endl;

    int answer_3 = solution.partitionArray(nums_3, k_3);
    std::cout << "Needet output: 3" <<std::endl;
    std::cout << answer_3 <<std::endl;


    return 0;
}