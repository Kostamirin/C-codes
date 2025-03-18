#include <iostream>
#include <algorithm>
#include <vector>

class Solution{
public:
    int max_Number(std::vector<std::vector<int>> numbers){
        int max = 0;
        for (int i = 0; i < numbers.size(); i++)
        {
           for (int j = 0; j < numbers[i].size(); j++)
           {
               {numbers[i][j] > max ? max = numbers[i][j] : max = max;}
           }
        }
        return max;
    }
};

int main(){
    std::vector<std::vector<int>> numbers = {{1,3,5,6}, {2,4,8,9}, {1,2,3,4},{2,3,1,4,5}, {0,8,4,9}, {0,0,10,0}};
    Solution solution;
    std::cout <<solution.max_Number(numbers) <<std::endl;
    std::cin.get();
    return 0;

}