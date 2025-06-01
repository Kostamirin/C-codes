// Created by kleymuner2131 on 01.06.25.

#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long ans = 0;
        vector<int> side(3);

        // if (n == 2 && limit == 1)
        // {
        //     return 3;
        // }

        for (int i = 0; i < limit; i++)
        {
           if (side[0]+side[1]+side[2] == n)
           {
               break;
           }
           side[0] ++;
        }
        for (int i = 0; i < limit; i++)
        {
           if (side[0]+side[1]+side[2] == n)
           {
               break;
           }
           side[1] ++;
        }
        for (int i = 0; i < limit; i++)
        {
           if (side[0]+side[1]+side[2] == n)
           {
               break;
           }
           side[2] ++;
        }
        if (side[0]+side[1]+side[2] != n)
        {
           return 0;
        }
        else if (side[0] == limit && side[1] == limit && side[2] == limit)
        {
        return 1;
        }

        ans ++;
        //bool arr[3] = {[](){return side[0] == 0;}(), [](){return side[1] == 0;}(), [](){return side[2] == 0;}()};

        //vector<int> side_main = side;
        int size = side[0];
        int something = side[1];
        vector<int> main_save = side;
        for (int i = 0; i < something; i++)
        {
            if (side[2] < limit)
            {
                side[1]--;
                side[2]++;
                ans++;
            }
            else
            {
                break;
            }
        }

        side = main_save;
        for (int i = 0; i < size; i++)
        {
            //side = side_save;
            if (side[1] < limit){
                side[0]--;
                side[1]++;
                ans++;
            }
            else if ( side[1] == limit && side[2] < limit)
            {
                side[0]--;
                side[2]++;
                ans++;
            }

            vector<int> side_save = side;

            int side_size = side[1];
            for (int j = 0; j < side_size; j++)
            {
                if (side[2] < limit)
                {
                    side[1]--;
                    side[2]++;
                    ans++;
                }
                else
                {
                    break;
                }
            }

            side = side_save;
        }

        return ans;
    }
};


int main()
{
    Solution solution;
    int n = 3;
    int limit = 2;
    long long answer = solution.distributeCandies(n, limit);
    std::cout << answer << std::endl;
    return 0;
