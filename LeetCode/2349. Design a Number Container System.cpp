// Created by kley-muner on 2/8/25.
#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

class NumberContainers {
public:
    // Constructor
    // The data structures are already initialized as
    // part of the member variable declarations.
    NumberContainers() {}

    void change(int index, int number) {
        if (indexToNumbers.find(index) != indexToNumbers.end()) {
            int previousNumber = indexToNumbers[index];
            numberToIndices[previousNumber].erase(index);
            if (numberToIndices[previousNumber].empty()) {
                numberToIndices.erase(previousNumber);
            }
        }
        indexToNumbers[index] = number;
        numberToIndices[number].insert(index);
    }

    int find(int number) {
        if (numberToIndices.find(number) != numberToIndices.end()) {
            // Get the smallest index
            return *numberToIndices[number].begin();
        }
        return -1;
    }

private:
    // Map from number to set of indices
    unordered_map<int, set<int>> numberToIndices;
    // Map from index to number
    unordered_map<int, int> indexToNumbers;
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */

int main(){
    vector<std::string> first = {"NumberContainers","find","change","change","change","change","find","change","find"};
    vector<vector<int>> second = {{}, {10}, {2,10}, {1,10}, {3,10}, {5,10}, {10}, {1,20}, {10}};
    vector<auto> answer = {null, -1, null, null, null, null, 1, null, 2};
    for (auto i : answer){std::cout <<answer[i] <<' ';} std::cout <<std::endl;
    NumberContainers* obj = new NumberContainers();
    for (int i = 0; i < first.size(); i++)
    {
        if (first[i] == "find")
        {
            std::cout << obj->find(second[i][0]) <<std::endl;
        }
        else if (first[i] == "change")
        {
            obj->change(second[i][0],second[i][1]);
        }
    }
    return 0;
}