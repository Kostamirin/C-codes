#include <iostream>
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

int main() {
  Solution solution;
  std::vector<int> nums = {2, 7, 11, 15};
  std::vector<int> something = solution.twoSum(nums, 13);
  for (int i = 0; i < something.size(); i++)
  {
      std::cout<<something[i] <<std::endl;
  }
  return 0;
}
