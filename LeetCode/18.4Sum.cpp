#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;


/*

    Time Complexity : O(N^3), Here Three nested loop creates the time complexity. Where N is the size of the
    array(nums).

    Space Complexity : O(N), Hash Table(set) space.

    Solved using Array(Three Nested Loop) + Sorting + Hash Table(set).

*/


/***************************************** Approach 2 *****************************************/

class Solution2 {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j+1, high = n-1;
                while(low < high){
                    if(nums[low] + nums[high] < newTarget){
                        low++;
                    }
                    else if(nums[low] + nums[high] > newTarget){
                        high--;
                    }
                    else{
                        set.insert({nums[i], nums[j], nums[low], nums[high]});
                        low++; high--;
                    }
                }
            }
        }
        for(auto it : set){
            output.push_back(it);
        }
        return output;
    }
};








#include <iostream>
int main(){
    Solution2 solution2;
    vector<int> nums = {1,0,-1,0,-2,2,1,1,3,2,2,7,8,-3,12,-5,-8};
    vector<vector<int>> answer2 =  solution2.fourSum(nums, 8); // Changed return type to vector<vector<int>>
                                // Changed return type to vector<vector<int>>

    std::cout << std::endl;
    for(auto it : answer2){
        for(auto it2 : it){
            std::cout << it2 << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    std::cin.get();
    return 0;
}