#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int randNum = rand() % 5 +1 ;

    switch(randNum){
        case 1: std::cout <<"You win a bumper sticker";
            break;
        case 2: std::cout <<"You win a t`shirt";
            break;
        case 3: std::cout <<"You win a free lunch";
            break;
        case 4: std::cout <<"You win a gift card";
            break;
        case 5: std::cout <<"You win concert tickers";
            break;
    }
    return 0;
}