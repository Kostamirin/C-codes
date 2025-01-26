#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        vector<double> pass_ratio;
        double average_pass_ratio;
        double max_heap = 0;

        for(int i = 0; i < classes.size(); i++){
            double pass = classes[i][0];
            double total = classes[i][0] + classes[i][1];

            if(pass / total > max_heap)
            {
                max_heap = pass / total;
            }

            double ratio = (double)pass / total;
            pass_ratio.push_back(ratio);
        }
    }
};

int main(){
    Solution solution;
    vector<vector<int>> classes = {{1,2},{3,5},{2,2}};
    int extraStudents = 2;
    double result = solution.maxAverageRatio(classes, extraStudents);
    std::cout <<result <<std::endl;
    std::cin.get();
    return 0;
}