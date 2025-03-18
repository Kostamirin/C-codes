// Created by kleymuner2131 on 18.03.25.
#include <iostream>
#ifndef ПРОГРЕССИЯ_АРИФМЕТИЧЕСКАЯ_И_ГЕОМЕТРИЧЕСКАЯ_H
#define ПРОГРЕССИЯ_АРИФМЕТИЧЕСКАЯ_И_ГЕОМЕТРИЧЕСКАЯ_H


class base
{
    public:
    void first(int a, int n, int d, int known_a, int known_sum)
    {
        std::cout<<"1.Arifmetical progression\n"
                   "2.Geometric progression\n"
                   "3.Instruction\n";
                   "4.Exit\n\n";
        std::cout<<"Enter your choice:";
        int choice;
        std::cin>>choice;
        switch (choice)
        {
        case 1: arifmetical(a,n,d,known_a, known_sum);
            break;
        case 2: geometric();
            break;
        case 3: instruction();
            break;
        case 4: exit(0);
            break;
        default:
            std::cout<<"Error: Wrong choice";
            exit(0);
            break;
        }
    }
    void arifmetical(int a,int n,int d,int known_a, int known_sum)
    {
        //* Запрос имеющийся значений


    }
    void geometric()
    {

    }
    void instruction()
    {

    }

};



#endif //ПРОГРЕССИЯ_АРИФМЕТИЧЕСКАЯ_И_ГЕОМЕТРИЧЕСКАЯ_H
