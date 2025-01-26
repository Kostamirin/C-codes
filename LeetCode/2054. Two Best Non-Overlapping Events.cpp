#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        int maxProfit;
        for (int i = 0; i < events.size(); i++)
        {
            int begin = events[i][0];
            int end = events[i][1];
            int profit = events[i][2];

            for (int j = i + 1; j < events.size(); j++)
            {
                if (events[j][0] >= end)
                {
                    maxProfit = max(maxProfit, profit + events[j][2]);
                }
                else{continue;}
            }
        }
        return maxProfit;
    }
};


#include <iostream>
int main(){
    Solution solution;
    vector<vector<int>> times = {{1,3,2},{4,5,2},{2,4,3}};
    int answer = solution.maxTwoEvents(times);
    cout << answer << endl;
    return 0;
}