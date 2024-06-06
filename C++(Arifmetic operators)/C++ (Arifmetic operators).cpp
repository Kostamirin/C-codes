#include <iostream>

int main(){
    int students = 20;
    //students = 20 + 1;
    
    // ~students=20+1 можно заменить на ~students+=1
    //students += 1;
    //students ++;  //Добавляет ТОЛЬКО +1
    
    //Вычитание
    // students = students - 1;
    //students -=1;
    //students--;  //Вычитает ТОЛЬКО -1

    //Умножение
    //students = students * 2;
    //students *=2
    // ~srudents ** не используется принцыпе тк умножение на 1 ничего не даст(нового)

    //Деление 
    //students = students / 2;
    //students /=2;
    // ~srudents // не используется принцыпе тк деление на 1 ничего не даст(нового)
    
    //Остаток от числа 
    students = students % 2; // Проще - это деление ~students на 2, но при этом мохраняется тольео остаток
    // ИЛИ можно добавить новую переменную (такую как ~remainder) и дать ей значение ~students % 2;
        //int remainder = students % 2  //Таким образом можно проверять четное ли число(при= % 2) (если остаток есть(=1), то число не четное, если остатка нет(=0), то чисто четное)
    std::cout <<students <<std::endl;
    return 0;
}