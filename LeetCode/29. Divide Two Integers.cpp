#include <algorithm>
#include <climits>

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Делимое минимальное число И делитель == -1
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        // Делимое минимальное чисто И делитель == 1
        if (dividend == INT_MIN && divisor == 1) return INT_MIN;
        return dividend / divisor;
    }
};
