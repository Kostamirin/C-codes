// Created by kley-muner on 2/9/25.
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int first;
    int second;
    std::cout <<"Enter start: "; std::cin >>first;
    std::cout <<"Enter end: "; std::cin >>second;
    if (first > second)
    {
        int range = first-second + 1;
        if (range %2 != 0)
        {
            int sum = first+second;
            int dop = sum/2;
            std::cout <<((range-1)/2 * sum)+dop <<std::endl;
        }
        else
        {
            int sum = first+second;
            std::cout <<((range)/2 * sum) <<std::endl;
        }
    }
    else
    {
        int range = second-first + 1;
        if (range %2 != 0)
        {
            int sum = first+second;
            int dop = sum/2;
            std::cout <<((range-1)/2 * sum)+dop <<std::endl;
        }
        else
        {
            int sum = first+second;
            std::cout <<((range)/2 * sum) <<std::endl;
        }
    }
}

