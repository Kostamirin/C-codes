// Created by kley-muner on 2/27/25.
#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int answer;
        vector<int>answer_vector;
        for (int i = 0; i < arr.size()-1; i++)
        {
            
        }
        return 0;
    }
};

int main()
{
    Solution solution;
    vector<int> example = {1,2,3,4,5,6,7,8};
    int answer = 5; // Потому что длина максимального Fibonacci-like массива =5
    int answer_me = solution.lenLongestFibSubseq(example);
    std::cout <<answer <<std::endl;
    std::cout <<answer_me <<std::endl;

    return 0;
}