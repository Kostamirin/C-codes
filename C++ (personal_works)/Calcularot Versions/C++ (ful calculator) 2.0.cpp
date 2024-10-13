#include <iostream>
#include <cmath>

int main(){
    double first;
    double second = 0.0;
    double result;
    std::string fmath;
    
    std::cout <<"Enter your first number: ";
    std::cin >>first;
    
    std::cout <<"Enter math function: ";
    std::cin >>fmath;

    // Handling math functions that require a second number
    if(fmath == "+" || fmath == "-" || fmath == "*" || fmath == "/"){
        std::cout <<"Enter your second number: ";
        std::cin >>second;
    }
    
    if(fmath == "+"){
        result = first + second;
    }
    else if(fmath == "-"){
        result = first - second;
    }
    else if(fmath == "*"){
        result = first * second;
    }
    else if(fmath == "/"){
        if (second != 0.0) {
            result = first / second;
        } else {
            std::cout << "Error: Division by zero" << std::endl;
            return 1; // Exiting with error code
        }
    }
    else if(fmath == "pow"){
        result = pow(first, second);
    }
    else if(fmath == "sqrt"){
        result = sqrt(first);
    }
    else if(fmath == "abs"){
        result = abs(first);
    }
    else if(fmath == "round"){
        result = round(first);
    }
    else {
        std::cout << "Invalid math function" << std::endl;
        return 1; // Exiting with error code
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
