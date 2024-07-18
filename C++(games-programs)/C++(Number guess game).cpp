#include <iostream>

int main(){
    int num;
    int guess;
    int tries = 0;
    
    srand(time(NULL));
    num = (rand() % 100) +1;

    std::cout <<"         Number guess game    \n";
    
    do{
        std::cout <<"Enter a guess between (1-100): ";
        std::cin >>guess;
        tries += 1;

        if(guess > num){
            std::cout <<"Too high!\n";
        }
        else if(guess < num){
            std::cout <<"Too low\n";
        }
        else{
            std::cout <<'\n';
            std::cout <<"Correct!\n";
            std::cout <<"Num of tries: "<<tries <<'\n'<<'\n';
        }
    }while(guess != num);

    return 0;
}