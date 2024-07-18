#include <iostream>

int getDigit(int const number){

    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string cardNum){

    int sum = 0;

    for(int i = cardNum.size() - 1; i >= 0 ; i -=2){
        sum += cardNum[i] - '0' ;
    }
};
int sumEvenDigits(const std::string cardNum){
    
    int sum = 0;
    
    for(int i = cardNum.size() - 2; i >= 0 ; i -=2){
        sum += getDigit((cardNum[i] - '0') * 2) ;
    }
};

int main(){
    std::string cardNum;
    int result = 0;

    std::cout <<"Enter a card #: ";
    std::getline(std::cin, cardNum);

    result = sumEvenDigits(cardNum) + sumOddDigits(cardNum);

    if(result % 10 == 0){
        std::cout <<"Card is valid" <<'\n';
    }
    else{
        std::cout <<"Card is not valid" <<'\n';
    }
}