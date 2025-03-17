// Created by kley-muner on 2/24/25.
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
using namespace std;

class Solution {
public:
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        std::map<int,int> cost; //! Переменная отвечающая за сохранение наименования-> цене двери
                                // Global
        //* Присваивание значений для cost -> точка/цена точки дерева
        for (int i = 0; i < amount.size(); i++)
        {
            cost.insert({i,amount[i]});
        }
        //* Анализ путей ↓
        for (int i = 0; i < edges.size(); i ++)
        {

        }

        //* Нахождение пути Bob-а ↓

        return 0;//!!!!!!!
    }
};

int main()
{
    Solution solution;
    std::vector<vector<int>> edges = {{0,1},{1,2},{1,3}, {3,4}};
    int bob = 3;
    vector<int> amount = {-2,4,2,-4,6};
    int answer = 6; // Ответ на пример
    int answer_my = solution.mostProfitablePath(edges,bob,amount);
    std::cout <<answer <<std::endl;
    std::cout <<answer_my <<std::endl;

    return 0;
}