//#include <string>
#include <iostream>


class Solution {
public:
    std::string longestPalindrome(std::string s) {
        for (int length = s.size(); length > 0; length--) {
            for (int start = 0; start <= s.size() - length; start++) {
                if (check(s, start, start + length)) {
                    return s.substr(start, length);
                }
            }
        }

        return "";
    }

private:
    bool check(std::string s, int i, int j) {
        int left = i;
        int right = j - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};