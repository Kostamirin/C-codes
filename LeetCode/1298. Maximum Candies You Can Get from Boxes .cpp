// Created by kleymuner2131 on 03.06.25.
#include <vector>
#include <algorithm>
#include <chrono>
#include <iostream>

using namespace std;
class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys,
                vector<vector<int>>& containedBoxes, vector<int>& initialBoxes)
    {
        int maxCandies = 0;

        for (int i = 0; i < initialBoxes.size(); i++)
        {
            if (status[initialBoxes[i]] == 1)
            {
                maxCandies += candies[initialBoxes[i]];
                for (int j = 0; j < keys[initialBoxes[i]].size(); j++)
                {
                    status[keys[initialBoxes[i]][j]] = 1;
                }
                for (int j = 0; j < containedBoxes[initialBoxes[i]].size(); j++)
                {
                    if (status[containedBoxes[initialBoxes[i]][j]] == 1)
                    {
                        maxCandies += candies[containedBoxes[initialBoxes[i]][j]];
                    }
                }
            }
        }

        return maxCandies;
    }
};

int main()
{
    Solution solution;

    vector<int> status = {1,1,0};
    vector<int> candies = {7,4,5};
    vector<vector<int>> keys = {{1},{2},{3}};
    vector<vector<int>> containedBoxes = {{1,3},{2},{5}};
    vector<int> initialBoxes = {0};

    int answer = solution.maxCandies(status, candies, keys, containedBoxes, initialBoxes);
    cout << answer << endl;

    return 0;
}