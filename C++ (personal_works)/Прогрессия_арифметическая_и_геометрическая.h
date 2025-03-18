// Created by kleymuner2131 on 18.03.25.
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#ifndef ПРОГРЕССИЯ_АРИФМЕТИЧЕСКАЯ_И_ГЕОМЕТРИЧЕСКАЯ_H
#define ПРОГРЕССИЯ_АРИФМЕТИЧЕСКАЯ_И_ГЕОМЕТРИЧЕСКАЯ_H


class base
{
    public:
    void first(int a, int n, int d, int known_a, int known_sum)
    {
        std::cout<<"1.Arifmetical progression\n"
                   "2.Geometric progression\n"
                   "3.Instruction\n"
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
        std::cout<<"1.Enter known values\n"
                    "2.Exit\n\n";
        std::cout<<"Enter your choice:";int choice; std::cin>>choice;
        switch (choice){case 2: first(a,n,d,known_a, known_sum); break; case 1: break; default: std::cout<<"Error: Wrong choice"; break;}
        std::cout<<"Enter known values(if ih net=propusk):";
        std::cout<<"a: ";std::cin>>a;
        std::cout<<"n: ";std::cin>>n;
        std::cout<<"d: ";std::cin>>d;
        std::cout<<"known_a: ";std::cin>>known_a;
        std::cout<<"known_sum: ";std::cin>>known_sum;

        //Создание массива известных значений
        std::map<std::string,int> known_values{{"a",a},{"n", n},{"d", d},
                                               {"known_a", known_a},{"known_sum", known_sum}};
        for (int i = 0; i < known_values.size(); i++)
        {
            if (std::find_if(known_values.begin(), known_values.end(), [](std::pair<std::string,int>value, bool task){return value.second == NULL;}))
            {

            }
        }



    }
    void geometric()
    {

    }
    void instruction()
    {

    }

};



#endif //ПРОГРЕССИЯ_АРИФМЕТИЧЕСКАЯ_И_ГЕОМЕТРИЧЕСКАЯ_H
