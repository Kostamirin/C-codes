#include <vector>
#include <algorithm>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        nums.erase(std::remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};