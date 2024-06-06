#include <iostream>
#include <iomanip>
#include <strting>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
    int shoice = 0;

do{
    std::cout <<"*******************\n";
    std::cout <<"Enter your choice: \n";
    std::cout <<"*******************\n";
    std::cout <<"1. Show Balance " <<'\n';
    std::cout <<"2. Deposit Money\n";
    std::cout <<"3. Withdraw Money\n";
    std::cout <<"4. Exit \n";
    std::cin >>shoice;    

    std::cin.clear(); //Останавливает ошибку при введении лишних символов
    fflush(stdin);

    switch(shoice){
        case 1: showBalance(balance);
                break;
        case 2: balance += deposit();
                showBalance(balance);
                break;
        case 3: balance += withdraw(balance);
                break;
        case 4: std::cout <<"Good bye! Thanks for visiting!\n";
                break;
        default: std::cout <<"Please, try again(enter number 1-4)\n";
    }
}while(shoice != 4);

return 0;
}

void showBalance(double balance){
    std::cout << "Your balance: $ " << std::setprecision(2) << std::fixed << balance << "\n";
}
double deposit(){
    double dpmoney;
    
    std::cout <<"Enter amount to be deposited: ";
    std::cin >>dpmoney;

    if(dpmoney > 0){
        return dpmoney;
    }
    else if(dpmoney < 0){
        std::cout <<"Don`t enter negative number!"; 
        return 0;
    }
}
double withdraw(double balance){
    double amount;
    std::cout <<"Enter amount to be withdraw: ";
    std::cin >>amount;

    if(amount > balance){
        std::cout <<"You haven`t another money to without!\n";
        return 0;
    }
    else if(amount < 0){
        std::cout <<"Don`t enter negative amount to without!\n";
        return 0;
    }
    else{
    return amount;
    }

}