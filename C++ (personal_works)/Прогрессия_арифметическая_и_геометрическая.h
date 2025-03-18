// Created by kleymuner2131 on 18.03.25.
#ifndef ПРОГРЕССИЯ_АРИФМЕТИЧЕСКАЯ_И_ГЕОМЕТРИЧЕСКАЯ_H
#define ПРОГРЕССИЯ_АРИФМЕТИЧЕСКАЯ_И_ГЕОМЕТРИЧЕСКАЯ_H

#include <iostream>
#include <map>
#include <cmath>

class base
{
public:
    void menu()
    {
        std::cout << "1. Арифметическая прогрессия\n"
                  << "2. Геометрическая прогрессия (пока не реализовано)\n"
                  << "3. Инструкции\n"
                  << "4. Выход\n\n";
        std::cout << "Введите ваш выбор: ";
        int choice;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            арифметическаяПрогрессия();
            break;
        case 2:
            std::cout << "Геометрическая прогрессия ещё не реализована.\n";
            break;
        case 3:
            инструкция();
            break;
        case 4:
            exit(0);
            break;
        default:
            std::cout << "Ошибка: Неверный выбор.\n";
            exit(0);
            break;
        }
    }

    void арифметическаяПрогрессия()
    {
        int первыйЧлен = 0; // a_1
        int шаг = 0;        // Разность d
        int порядковыйНомер = 0;   // Номер n
        int ценаЧлена = 0;  // Значение n-го члена a_n
        int суммаЧленов = 0; // Сумма первых n членов

        std::cout << "Введите известные значения (если значение неизвестно, введите -1):\n";
        std::cout << "Первый член (a_1): ";
        std::cin >> первыйЧлен;
        std::cout << "Шаг прогрессии (d): ";
        std::cin >> шаг;
        std::cout << "Номер члена (n): ";
        std::cin >> порядковыйНомер;

        if (первыйЧлен != -1 && шаг != -1 && порядковыйНомер != -1)
        {
            // Вычисление n-го члена прогрессии: a_n = a_1 + (n-1)*d
            ценаЧлена = первыйЧлен + (порядковыйНомер - 1) * шаг;
            std::cout << "Значение " << порядковыйНомер << "-го члена (a_" << порядковыйНомер << "): " << ценаЧлена << "\n";

            // Вычисление суммы первых n членов: S_n = n/2 * (2*a_1 + (n-1)*d)
            суммаЧленов = (порядковыйНомер * (2 * первыйЧлен + (порядковыйНомер - 1) * шаг)) / 2;
            std::cout << "Сумма первых " << порядковыйНомер << " членов (S_" << порядковыйНомер << "): " << суммаЧленов << "\n";
        }
        else
        {
            std::cout << "Требуется больше данных для вычислений.\n";
        }

        std::cout << "\nВозвращаемся в меню...\n";
        menu();
    }

    void инструкция()
    {
        std::cout << "Инструкция по использованию программы:\n"
                  << "1. Введите необходимые параметры арифметической прогрессии: первый член (a_1), шаг прогрессии (d)\n"
                  << "   и номер (n), если они известны.\n"
                  << "2. Программа вычислит n-ый член прогрессии и сумму первых n членов, если это возможно.\n"
                  << "3. Для выхода из программы выберите соответствующий пункт меню.\n\n";
        menu();
    }
};

#endif // ПРОГРЕССИЯ_АРИФМЕТИЧЕСКАЯ_И_ГЕОМЕТРИЧЕСКАЯ_H