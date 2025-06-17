// Created by kleymuner2131 on 17.06.25.

#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < target && i != nums.size() - 1)
            {
                continue;
            }
            else if (i == nums.size() - 1 && nums[i] < target)
            {
                return i + 1;
            }
            else if (nums[i] == target)
            {
                return i;
            }
            else//if (nums[i] > target)
            {
                return i;
            }
        }
        return nums.size() - 1;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1,3,5,6};
    int target = 7;

    std::cout << solution.searchInsert(nums, target) << std::endl;

    return 0;
}