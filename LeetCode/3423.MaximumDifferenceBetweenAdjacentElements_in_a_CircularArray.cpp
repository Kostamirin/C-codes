// Created by kleymuner2131 on 14.06.25.

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int max = nums[0];
        int min = nums[0];

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > max)
            {
                max = nums[i];
            }
            if (nums[i] < min)
            {
                min = nums[i];
            }
        }
        int answer = sqrt((max - min) * (max - min));
        return answer;
    }
};

int main()
{
    Solution Solution;
    vector<int> nums = {-5,-10,-5};

    int output = Solution.maxAdjacentDistance(nums);
    cout << output <<endl;

    return 0;
}
