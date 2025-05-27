// Created by kleymuner2131 on 26.05.25.
#include <string>
#include <vector>
//#include <queue>
#include <iostream>

using namespace std;
class Solution {
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int result = 0;
        int n = colors.size();
        vector<vector<int>> graph(n);
        vector<int> count(n, 0);

        for (auto edge : edges) {
            graph[edge[0]].push_back(edge[1]);
        }

        return result;
    }
};


int main()
{
    Solution solution;

    std::string colors = "abaca";
    std::vector<std::vector<int>> edges = {{0,1},{0,2},{2,3},{3,4}};

    int answer = solution.largestPathValue(colors, edges);
    std::cout <<answer <<std::endl;

    return 0;
}

