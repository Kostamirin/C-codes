#include <iostream>

int main(){
    const size = 96

    std::string food[size];

    // С 3+ частями:
    fill(food, food + size/3, "Cake");
    fill(food + size/3, food + (size/3)*2 , "Pizza");
    fill( food + (size/3)*2, food + size, "Tako");    


//C 2 частями так :    
/*    fill(food, food + size/2, "Cake");
    fill(food+size/2, food + size, "Pizza")
*/
    for(std::food : foods){
        std::cout <<food <<'\n';
    }

    return 0;

}