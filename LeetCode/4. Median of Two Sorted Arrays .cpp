#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

// float arifmetic(std::vector<int> numbers, int size){
//     double sum;
//     for(int i = 0; i < size; i++){
//         sum += numbers[i];
//     }

//     double arifmetic = sum / size;
//     return arifmetic;

// }

std::vector<int> sorting (std::vector<int> numbers, int size){
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++){
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    return numbers;
}

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        for(int i = 0; i < nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }

        const int size = nums1.size();
        //sorting(nums1, nums1.size());
        std::sort(nums1.begin(), nums1.end());


        if(size % 2 == 0){
            double median1 = nums1[size / 2 -1];
            double median2 = nums1[size / 2];
            double result  = (median1 + median2) / 2;
            return result;
        }
        else{
            double result = nums1[size / 2];
            return result;
        }
    }
};

int main()
{
    Solution solution;
    std::vector<int> first = {1,2};
    std::vector<int> second = {3,4};

    double answer = solution.findMedianSortedArrays(first,second);
    std::cout <<answer <<std::endl;

    return 0;
}