#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::vector <int> result;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            if(i > 0 && nums[i] != nums[i -1]){
                result.push_back(nums[i]);
            }
            else if(i == 0){
                result.push_back(nums[i]);
            }
        }
        nums = result;
        return nums.size();
    }
};

#include <iostream>
int main(){
    Solution solution;
    vector<int> nums = {1,1,2};
    std::cout << solution.removeDuplicates(nums) << std::endl;
    return 0;
}