#include <iostream>

int main(){
    int rows;
    int columns;
    char symbol;
    
    std::cout <<"How many rows?: ";
    std::cin >>rows;

    std::cout <<"How maby columns?: ";
    std::cin >>columns;

    std::cout <<"Enter the sumbol to use: ";
    std::cin >>symbol;

    for(int i = 1; i <=rows; i ++){
        for(int j =1; j <=columns; j ++){
            std::cout <<symbol;
        }
    std::cout <<'\n';
    }
    int ful = rows * columns;
    std::cout <<"Aaand you send " <<ful <<" simbols" <<'\n';

    return 0;
}

