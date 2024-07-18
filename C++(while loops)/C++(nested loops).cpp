#include <iostream>

int main(){
    for(int i = 1; i <=3 ; i++){
        for(int j =1 ; j <=10; j++){
            std::cout <<j <<' ';  // НЕ путать с ~i    - это разные переменные
        }
    std::cout <<'\n';
    }
    return 0;
}
