#include <iostream>
#include <vector>

int main(){
    int nums[] = {5,1,5,6,2,16,23};
    int target = 24;
    int size = sizeof(nums)/sizeof(nums[0]);

    for(int i = 0; i < size; i++){
        for(int j = i +1; j< size; j++){
            if(nums[j] == target - nums[i]){
                std::cout << "Answer is " <<"[" <<i <<',' <<j <<"]" <<" ; " <<"[" <<j <<',' <<i <<"]" <<std::endl;
                return 0;
            }
            else{
                std::cout <<"Wait.." <<std::endl;
            }
        }
    }

    return 0;
}


