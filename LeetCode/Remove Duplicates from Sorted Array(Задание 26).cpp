#include <vector>
#include <algorithm>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i -1]){
                nums.erase(nums.begin() + i);
            }
            else{continue;}
        }
        

        return nums.size();
    }
};
//i > 0 && nums[i] == nums[i - 1]

#include <iostream>
int main(){
    Solution solution;
    std::vector<int> nums = {1,1,2};
    std::vector<int> nums2 = {1,2,3,3,3,3,6,7,8,9};

    std::cout <<solution.removeDuplicates(nums) <<std::endl;
    std::cout <<solution.removeDuplicates(nums2) <<std::endl;
    std::cin.get();
    return 0;
}