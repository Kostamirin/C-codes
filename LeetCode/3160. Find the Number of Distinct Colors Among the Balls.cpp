// Created by kley-muner on 2/7/25.
#include <vector>
#include <algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        // код должен возвращать значение количества разных цветов на каждом этапе проверки
        std::vector<int> result;
        for (int i; i < queries.size(); i++)
        {
            int left = queries[i][0];
            int right = queries[i][1];

        }
        return result;
    }
};


int main(){
    std::vector<vector<int>> queries = {{1,4},{2,5}, {1,3}, {3,4}};
    std::vector<int> output = {1,2,2,3};
    Solution solution;
    std::vector<int> result = solution.queryResults(4, queries);
    if (result == output)
    {
        std::cout <<"Fine" <<std::endl;
        std::cout <<'[' ;
        for (auto i : result)
        {
            std::cout <<result[i] <<' ';
        }
        std::cout <<']' <<std::endl;
    }
    else
    {
        std::cout <<"Wrong answer" <<std::endl;
        std::cout <<'[';
        for (auto i : result)
        {
            std::cout <<result[i] <<", ";
        }
        std::cout <<']' <<std::endl;
        std::cout <<'[';
        for (auto i : output)
        {
            std::cout <<output[i] <<', ';
        }
        std::cout <<']' <<std::endl;
    }
    return 0;
}