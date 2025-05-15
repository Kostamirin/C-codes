// Created by kleymuner2131 on 15.05.25.
#include <string>
#include <iostream>

using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
       string result = " ";
        if (s.size() == 1)
        {
            return s;
        }

        for (int i = 0; i < s.size(); i++)
        {
            int left = i;
            int right = i;
            while (left >= 0 && right < s.size() && s[left] == s[right])
            {
                if (right - left + 1 > result.size())
                {
                    result = s.substr(left, right - left + 1);
                }
                left--;
                right++;
            }
            left = i;
            right = i + 1;
            while (left >= 0 && right < s.size() && s[left] == s[right])
            {
                if (right - left + 1 > result.size())
                {
                    result = s.substr(left, right - left + 1);
                }
                left--;
                right++;
            }
        }

        if (result == " ")
        {
            return s.substr(0,1);
        }

        return result;
    }
};

int main()
{
    Solution solution;
    std::string check = "mirrooor-moonoom";
    std::string answer = "moonoom";

    std::string main = solution.longestPalindrome(check);
    std::cout << main <<std::endl;
    if (main == answer)
    {
        std::cout << main <<" = " <<answer;
    }
    else
    {
        std::cout <<main <<" != " <<answer;
    }

    return 0;
}