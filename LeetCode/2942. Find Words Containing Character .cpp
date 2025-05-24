// Created by kleymuner2131 on 24.05.25.
#include <vector>
#include <string>
#include <iostream>

using namespace std;
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        std::vector<int> result = {};
        for (int  i = 0; i < words.size(); i++)
        {
            if (words[i].find(x) != std::string::npos)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};

int main()
{
    Solution solution;
    vector<string> words = {"abc","bcd","aaaa","cbc"};
    char x = 'a';

    vector<int> result = solution.findWordsContaining(words, x);

    std::cout <<"[";
    for (int i = 0; i < result.size(); i++)
    {
        std::cout <<result[i] <<' ';
    }
    std::cout <<"]" <<std::endl;

    return 0;
}
