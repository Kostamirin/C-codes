// Created by kleymuner2131 on 15.05.25.
#include <string>
#include <iostream>

using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() == 1){return s;}
        string result = " ";

        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i + 1; j <= s.size(); j++)
            {
                string side_string = s.substr(i, j - i);
                if (side_string == string(side_string.rbegin(), side_string.rend()))
                {
                    if (side_string.size() > result.size())
                    {
                        result = side_string;
                    }
                }
            }
        }
        if (result == " ")
        {
            return s.substr(0, 1);
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