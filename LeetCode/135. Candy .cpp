// Created by kleymuner2131 on 08.06.25.

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
class Solution {
public:
    int candy(vector<int>& ratings)
    {
        //int answer = ratings.size();
        int answer = 0;
        int max = 0;

        for (int i = 0; i < ratings.size(); i ++)
        {
            if (ratings[i] > max)
            {
                answer += max ++;
                max ++;
            }
            else if (ratings[i] > 0 && ratings[i] > max)
            {
                answer += 2;
            }
            else
            {
                answer ++;
            }
        }

        return answer;
    }
};


int main()
{
    Solution solution;

    vector<int> ratings = {1,0,2};
    int answer = solution.candy(ratings);

    std::cout << answer << std::endl;

    return 0;
}