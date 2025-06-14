// Created by kleymuner2131 on 14.06.25.

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int answer = abs(nums[0] - nums[n-1]);

        for (int i = 0; i < n-1; i++)
        {
            answer = max(answer, abs(nums[i] - nums[i-1]));
        }
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
