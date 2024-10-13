#include <iostream>
#include <cmath>

int main(){
    double first;
    double second;
    double ful;
    std::string fmath;
    

    std::cout <<"Enter your first number: ";
    std::cin >>first;
    
    std::cout <<"Enter math function: ";
    std::cin >>fmath;
    
    if(fmath == "+" || fmath =="-" || fmath =="/" || fmath =="*" || fmath == "pow"){
        std::cout <<"Enter your second number: ";
        std::cin >>second;
    }

    if(fmath == "+"){
        ful = first + second;
    }
    else if(fmath == "-"){
        ful = first - second;
    }
    else if(fmath == "*"){
        ful = first * second;
    }
    else if(fmath == "/"){
        if(second != 0.00){
            ful = first / second;
        }
        else{
            std::cout <<"Don`t  / on zero more, please!";
        }
    }
    else if(fmath == "pow"){
        ful = pow(first, second);

    }
    else if(fmath == "sqrt"){
        ful = sqrt(first);
    }
    else if(fmath == "abs"){
        ful = abs(first);
    }
    else if(fmath == "round"){
        ful = round(first);
    }
    else{
        std::cout <<"Me don`t have this function. I think i has add new function in new version ;)" <<'\n';
        return 1;
    }

    std::cout <<"Resultat = " <<ful <<'\n';

    return 0;
}