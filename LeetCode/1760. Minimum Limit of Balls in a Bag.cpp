#include <vector>
#include <string>
#include <algorithm>


using namespace std;
class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());

        while (left < right)
        {
            int mid = left + (right - left) / 2;
            int count = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                count += (nums[i] - 1) / mid;
            }
            if (count <= maxOperations)
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;
    }
};

#include <iostream>
int main(){
    Solution solution;
    vector<int> nums = {1,2,3,4,5,6};
    int maxOperations = 12;
    std::cout << solution.minimumSize(nums, maxOperations) << std::endl;
    std::cin.get();
    return 0;
}

