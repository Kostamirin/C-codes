#include <iostream>

int main(){
    std::string name = "Kostya";
    int age = 14;
    bool student = true;
// Для ~memory address используется     &    штучка
    std::cout <<&name <<'\n';   // Значение выводиться в 16-ричной системе => желательно уточнять значение в 10-ричной системе используя различные сайты

    return 0;
}