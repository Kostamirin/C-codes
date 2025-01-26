#include <string>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int size = haystack.size();
        for(int i = 0; i < size; i++){
            if(haystack[i] == needle[0] && haystack.substr(i, n) == needle){
                return i;
            }
            else{continue;}
        }
        return -1;
    }
};

#include <iostream>
int main(){
    Solution Solution;
    std::string haystack = "sadbutsad"; 
    std::string needle = "sad";
    std::cout << Solution.strStr(haystack, needle) << std::endl;
    return 0;
}