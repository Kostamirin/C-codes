#include <iostream>

    namespace first{
        int x = 1; 
    }
    namespace second{
        int x = 10;
    }

int main(){
    int x = 5;
    std::cout << x  <<std::endl;
    std::cout <<first::x <<std::endl;    
    std::cout <<second::x <<std::endl;    
}
// Здесь можно не использовать ~std тк используется ~Namespace_std
int main(){
    using namespace std;
    string name= "Bro";
    cout <<"Привет " <<name;
    return 0;
}