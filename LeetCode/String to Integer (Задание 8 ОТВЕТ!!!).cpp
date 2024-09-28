#include <string>

class Solution {
public:
    int myAtoi(std::string s) {
        int sign = 1;
        int result = 0;
        int index = 0;

        while (s[index] == ' ') {
            ++index;
        }

        if (s[index] == '-') {
            sign = -1;
            ++index;
        } else if (s[index] == '+') {
            ++index;
        }

        while (isdigit(s[index])) {
            if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) && s[index] - '0' > 7)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            result = 10 * result + (s[index++] - '0');
        }

        return result * sign;
    }
};