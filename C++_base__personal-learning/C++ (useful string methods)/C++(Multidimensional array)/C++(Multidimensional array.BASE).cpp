#include <iostream>

int main(){
    std::string cars[3][4] ={{"Mustang", "Escape", "F-150"},
					         {"Corvette", "Equinox", "Silverado"},
					         {"Challenger", "Durango", "Ram 1500"}
                            };
    std::cout <<cars[1][2] <<'\n';
    std::cout <<cars[0][0] <<'\n';   // Cчет начинается с 0 (как и в обычном массиве) в обоих направлениях

    
    return 0;
}