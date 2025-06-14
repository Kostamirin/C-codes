// Created by kleymuner2131 on 10.06.25.
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
class Solution {
public:
    int maxDifference(string s) {
        int max = 0;
        int side = 0;
        std::sort(s.begin(), s.end());

        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i-1])
            {
                side++;
            }
            else if (s[i] != s[i-1])
            {
                if (side > max){max = side;}
                else if (side < max){return max - side;}
                else{continue;}
            }
        }
    }
};

int main()
{
    Solution solution;
    string s = "aaaaabbc";
    int answer = solution.maxDifference(s);
    std::cout <<answer <<std::endl;
    return 0;
}