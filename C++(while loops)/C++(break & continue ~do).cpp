#include <iostream>

int main(){
    for(int i = 1; i<=20; i ++){
        if(i == 13){
            continue;  // ЕСЛИ: ~break;   - тогда условие окончательно остановится на 12
        }
        std::cout <<i <<'\n';

        return 0;
    }
}
