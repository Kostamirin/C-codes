#include <iostream>


template <typename L>
L max(L x, L y){
    return(x > y) ? x : y ;
}


int main(){

    std::cout <<max('17.6','17.9') <<'\n';


return 0;
}
