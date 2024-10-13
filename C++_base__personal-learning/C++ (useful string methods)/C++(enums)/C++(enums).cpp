#include <iostream>

enum Day {
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

int main(){

    Day today = monday;
    switch(today){
        case "Monday" : std::cout <<"It`s monday" <<'\n';
        break;
    }


    return 0;
}