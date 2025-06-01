// Исправленный и оптимизированный код
#include <vector>
#include <iostream>
#include <algorithm>

class Solution
{
public:
    long long distributeCandies(int n, int limit)
    {
        long long ans = 0;

        // Перебор всех допустимых значений для 3 групп
        for (int x = 0; x <= limit; ++x)
        {
            for (int y = 0; y <= limit; ++y)
            {
                int z = n - (x + y); // Третья группа заполняется остатком
                if (z >= 0 && z <= limit)
                {
                    ans++;
                }
            }
        }

        return ans;
    }
};

int main()
{
    Solution solution;
    int n = 10001;       // Количество конфет
    int limit = 20014;   // Ограничение на каждую группу
    long long answer = solution.distributeCandies(n, limit);
    std::cout << "Количество способов распределения: " << answer << std::endl;
    return 0;
}