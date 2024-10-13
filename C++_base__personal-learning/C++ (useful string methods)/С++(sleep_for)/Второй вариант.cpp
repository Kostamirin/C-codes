#include <iostream>
#include <unistd.h>

int main(){
    std::cout <<"Wait" <<'\n';
    sleep(0.25);
    std::cout <<"Wait." <<'\n';
    sleep(0.5);
    std::cout <<"Wait.." <<'\n';
    sleep(1);
    std::cout <<"Wait..." <<'\n';
    sleep(2);
    std::cout <<"Done!" <<'\n';

    return 0;
}