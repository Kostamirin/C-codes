#include <iostream>

template <typename L, typename T>
auto max(T x, L y){             // Как напоминание скажу что ~auto лучше не использовать, 
    return(x > y) ? x : y ;     //но в данном контексте это лучшее что можно сделать

}


int main(){

    std::cout <<max('17.6','17.9') <<'\n';


return 0;
}
