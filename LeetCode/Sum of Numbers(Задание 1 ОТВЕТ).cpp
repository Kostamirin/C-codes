//#include <iostream>
#include <vector>
#include <unordered_map>


class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (num_map.count(complement)) {
                return { num_map[complement], i };
            }
            num_map[nums[i]] = i;
        }
        
        return {}; // возвращаем пустой вектор, если решение не найдено (хотя по условию оно всегда есть)
    }
};