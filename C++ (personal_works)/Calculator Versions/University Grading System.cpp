// Created by kley-muner on 2/22/25.
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
void swap(vector<float>::iterator begin, vector<float>::iterator end);

float calculateAverageGrade(std::vector<float> examScores) {
    sort(examScores.begin(), examScores.end());
    std::reverse(examScores.begin(), examScores.end());
    vector<float> best;
    for (int i=0; i < 3; i++)
    {
        best.push_back(examScores[i]);
    }
    auto it = find_if(examScores.begin(), examScores.end(), [examScores](float num){return num > 90.0;});
    if (it != examScores.end())
    {
        float answer = ((best[0] + best[1] + best[2])/3);
        answer += (answer/100)*5;
        return answer;
    }
    else
    {
        return ((best[0] + best[1] + best[2])/3);
    }
}

int main()
{
    std::vector<float> examScores = {85.5, 92, 88, 79.5};
    float done = calculateAverageGrade(examScores);
    std::cout <<done <<std::endl;
    return 0;
}


