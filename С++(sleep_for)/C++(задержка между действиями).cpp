#include <iostream>
#include <thread>
#include <chrono>
#include <unistd.h>


int main() {
    // Действие 1
    std::cout << "Начало действия 1" << std::endl;

    // Задержка в 1 секунду
    std::this_thread::sleep_for(std::chrono::seconds(1)); // Строка которая создает задержку
    
    //Также испольшуеттся это: 
    //std::this_thread::sleep_for(std::chrono::milliseconds(500));            }

    // Действие 2
    std::cout << "Начало действия 2" << std::endl;

    return 0;
}
