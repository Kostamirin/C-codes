#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    std::vector<int> merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        std::vector<int> result;
        int i = 0, j = 0;
        if(nums1.size() != 0){
            for(int i = 0; i < m; i++){
                result.push_back(nums1[i]);
            }
        }
        if(nums2.size() != 0){
            for(int j = 0; j < n; j++){
                result.push_back(nums2[j]);
            }    
        }

        std::sort(result.begin(), result.end());
        return result;
    }
};

#include <iostream>
int main(){
    std::vector<int> nums1 = {1,2,3,0,0,0};
    std::vector<int> nums2 = {2,2,3,4,5,6};
    int m = 3;
    int n = 6;
    Solution Solution;
    std::vector <int> result = Solution.merge(nums1, m, nums2, n);
    for(int i = 0; i < result.size(); i++){std::cout <<result[i] <<' ';}

    std::cout <<"Please press Enter to continue";
    std::cin.get();
    return 0;
}