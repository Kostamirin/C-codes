#include <iostream>

double getTotal(double prices[], int size);

int main(){
    double prices[] = {20, 15.2, 40,04, 86.4};
    int size = sizeof(prices[])/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout <<"$" <<total <<'\n';
    
}
double getTotal(double prices[], int size){
    double total = 0;

    for(int i= 0; i <size; i ++){
        total += prices[i];
    }
}