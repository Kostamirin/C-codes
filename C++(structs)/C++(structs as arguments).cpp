#include <iostream>


struct car{             // Структура должна быть первее ~void
    std::string model = "Empty";
    int year = 0;
    std::string color = "Empty";
};

void printCar(car &carS);
void paintCar(car &carS, std::string color);

int main(){
    car lamba;
    lamba.model = "Lamborgini";
    lamba.year = 2001;
    lamba.color = "yellow";
    
    car porshe;
    porshe.model = "Porshe";
    porshe.year = 2013;
    porshe.color = "blue";

    paintCar(lamba, "Gold");     // Перекрасил машины
    paintCar(porshe, "Silver");

    printCar(lamba);    
    printCar(porshe);


    return 0;
}

void printCar(car &carS){
    std::cout <<"The model is: " <<carS.model <<'\n';
    std::cout <<"Create in " <<carS.year <<'\n';
    std::cout <<"Color : " <<carS.color <<'\n' <<'\n';
}

void paintCar(car &carS, std::string color){    // Без ссылки перекаска не сработает
    carS.color = color;
}

