#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "helper.cpp"

using namespace std;
class Solution {
public:
    Movement movement;

    bool canChange(string start, string target) {
        if(start == target){return true;}
        int size = start.size();
        for(int i = 0; i < size; i++){
            if(start == target){return true;}
            if(start[i] == '_'){
                continue;
            }
            else if(start[i] == 'L'){
                if(i == 0){
                    continue;
                }
                else{
                    movement.moveLeft(start, target, i);
                }
            }
            else if(start[i] == 'R'){
                if(i == size-1){
                    continue;
                }
                else{
                    movement.moveRight(start, target, i);
                }
            }
        }
        if(start == target){return true;}
        else{return false;}
    }
};

int main(){
    Solution s;
    string start = "_L_L_R__R_";
    string target = "LL____R__R";
    bool something = s.canChange(start, target);
    std::cout <<(something? "true": "false") <<std::endl;
    std::cin.get();
    return 0;
}