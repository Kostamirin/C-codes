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
    sorting(nums1, nums1.size());
    
    std::vector<int> numbers = sorting(nums1, nums1.size());
    
    if(size % 2 == 0){
        double median1 = numbers[size / 2 -1];
        double median2 = numbers[size / 2];
        double something  = (median1 + median2) / 2;
        return something;
    }
    else{
        double something = numbers[size / 2];
        return something;
    }
}
};