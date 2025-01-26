#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

class Solution {
public:
    // Функция для вычисления улучшения pass ratio при добавлении одного студента
    double improvement(int pass, int total) {
        return (double)(pass + 1) / (total + 1) - (double)pass / total;
    }

    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n = classes.size(); // Количество классов

        // Распределяем дополнительных студентов
        while (extraStudents > 0) {
            int bestClass = -1; // Индекс класса с максимальным улучшением
            double maxDelta = -1.0;

            // Ищем класс, который даст наибольшее улучшение pass ratio
            for (int i = 0; i < n; i++) {
                int pass = classes[i][0];
                int total = classes[i][1];
                double delta = improvement(pass, total);

                if (delta > maxDelta) {
                    maxDelta = delta;
                    bestClass = i;
                }
            }

            // Добавляем одного студента в найденный класс
            classes[bestClass][0]++;
            classes[bestClass][1]++;
            extraStudents--;
        }

        // Вычисляем итоговое среднее значение pass ratio
        double totalAverage = 0.0;
        for (const auto& cls : classes) {
            totalAverage += (double)cls[0] / cls[1];
        }

        return totalAverage / n;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> classes = {{1, 2}, {3, 5}, {2, 2}};
    int extraStudents = 2;

    double result = solution.maxAverageRatio(classes, extraStudents);
    cout << fixed << setprecision(6) << result << endl;
    std::cin.get();
    return 0;
}
