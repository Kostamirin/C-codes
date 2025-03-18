// Created by kleymuner2131 on 18.03.25.
#include "Прогрессия_арифметическая_и_геометрическая.h"
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

int a = NULL;           //* Первое значение
int n = NULL;           //* Количество действий прогрессии
int d = NULL;           //* Прибавление
int known_a = NULL;     //* n-ое значение
int known_sum = NULL;   //* сумма значений до n

int main()
{
    base base;


    base.first(a,n,d,known_a,known_sum);


    return 0;
}