#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

std::vector<int> sum(std::vector<int> *l1, std::vector<int> *l2, int index){
    sum = l1[index] + l2[index];
    return sum;
}

class Solution{
    public: 
    std::vector<int> addTwoNumbers (std::vector<int> *l1, std::vector<int> *l2){
        std::vector <int> ret;
        int max = std::max(*l1.size(), *l2.size());
        for(int i = 0; i <max; i++){
            ret.push_back(sum(l1 , l2, i));
        }
        return ret;
    }
};