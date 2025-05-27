// Created by kleymuner2131 on 27.05.25.
#include <iostream>
#include <vector>
#include <string>


class Solution {
public:
    int differenceOfSums(int n, int m) {
        int main_sum = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i % m == 0)
            {
                main_sum -= i;
            }
            else
            {
                main_sum += i;
            }
        }
        return main_sum;
    }
};

int main() {
    Solution solution;
    int n = 10, m = 3;
    int result = solution.differenceOfSums(n, m);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
