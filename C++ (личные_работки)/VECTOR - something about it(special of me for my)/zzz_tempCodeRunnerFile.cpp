#include <iostream>
#include <vector>

int main(){
    std::vector<int> something = {1,2,3};

 something.push_back(4); //Добавляет значение в конеч vector-а
    
    std::cout <<"Количество элементов в vector-е: " <<something.size() <<std::endl;//Кол-во элементов в массиве
    
    std::cout <<something.at(2) <<std::endl <<std::endl; //Получение доступа к элементу массива

/*
    Работает только с int значением в скобках(РАССМОТРЕТЬ):
    something.insert(1);    //Добавляет элемент по индексу
    std::cout <<something[1];

    something.erase(1);     // Убирает элемент по индексу

*/

    std::cout <<"Массив с добавлением 4 : ";
    for(int i = 0; i  < something.size(); i++){
        std::cout  << something[i] <<"  ";
    }

    std::cout <<"Массив с убранной 4: ";
    something.pop_back(); //Удаляет последний элемент в vector-е
    for(int i = 0; i < something.size(); i++){
        std::cout <<something.at(i) <<"  "; // Метод .at() также работает с использованием переменных
    }
                                                                                                    std::cout <<std::endl;


    something.empty(); // Проверяет пуст ли vector (true/false)

    something. resize(80, 1);//Увеличивает размер vector-а до указанного значения, заполняя его
                             //Второе значение это то, чем все будет заполняться

    something.clear(); //Очищение всего вектора 
    std::cout <<something.size(); //Из-за очищения выведиться 0

    std::vector<int> first(20); //При присваивании значения размера переменные будут иметь значение
    std::cout <<first.size();

    return 0;
}