#include <vector>
#include <iostream>

std::vector <int> nums = {1,2,3,4,5};

//! class !!!
class Solution{
public:
    std::vector <int> run_sum_from_array(std::vector<int> &nums){
        int size =  sizeof(nums)/ sizeof(nums[0]);
        std::vector <int> nothing;
            do
            {
                nothing[0] = nums[0];
            }while(true == false);
        for(int i = 1; i<= size; i++ ){
            nothing[i] = nothing[i-1] + nums[i];
        }
        return nothing;
    }
};