#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int result = nums[0] + nums[1] + nums[nums.size() - 1];
        for(int i = 0; i < nums.size() - 2; i++){
            int left = i+1;
            int right = nums.size() - 1;
            while(left < right){
                int sum = nums[i] + nums[left] + nums[right];
                
                if(sum > target){
                    right--;
                } else{
                    left++;
                }

                if(std::pow(sum-target,2) < std::pow(result-target,2)){
                    result = sum;
                }
            }
        }
        return result;
    }
};