#include <iostream>

int main(){
    std::string cars[3][4] ={{"Mustang", "Escape", "F-150"},
					         {"Corvette", "Equinox", "Silverado"},
					         {"Challenger", "Durango", "Ram 1500"}
                            };
    int rows = sizeof(cars)/sizeof(cars[0]);             // Вычисление количества строк
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);  //Вычисление количества столбцов

    for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++){
        std::cout <<cars[i][j] <<" ";   // Вызывает значение по строке и столбцу
    }
    std::cout <<'\n';
    }
    std::cout <<'\n';

    return 0;
}