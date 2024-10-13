#include <iostream>

    namespace susnigger{
        std::string name = "I`m a new data";
    }

int main(){
    std::string name = "I`m a first data";
    std::cout <<name <<std::endl;
    std::cout <<susnigger::name <<std::endl;
    return 0;
}