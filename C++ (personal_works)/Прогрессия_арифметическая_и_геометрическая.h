// Created by kleymuner2131 on 18.03.25.
#ifndef ARITHMETIC_AND_GEOMETRIC_PROGRESSION_H
#define ARITHMETIC_AND_GEOMETRIC_PROGRESSION_H

#include <iostream>
#include <map>
#include <cmath>

class base
{
public:
    void menu()
    {
        std::cout
        << "1. Arithmetic progression\n"
        << "2. Geometric progression (not implemented yet)\n"
        << "3. Instructions\n"
        << "4. Exit\n\n";

        std::cout << "Enter your choice: ";
        int choice;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            arithmeticProgression();
            break;
        case 2:
            std::cout << "Geometric progression is not implemented yet.\n";
            menu();
            break;
        case 3:
            instructions();
            break;
        case 4:
            exit(0);
            //break;
        default:
            std::cout << "Error: Invalid choice.\n";
            exit(0);
            //break;
        }
    }
    void arithmeticProgression()
    {
        int firstTerm = -1;   // a_1
        int step = -1;        // Difference d
        int termNumber = -1;  // Term number n
        int termValue = -1;   // Value of n-th term a_n
        int sumOfTerms = -1;  // Sum of first n terms S_n

        std::cout << "Enter known values (if unknown, enter -1):\n";
        std::cout << "First term (a_1): ";
        std::cin >> firstTerm;
        std::cout << "Step of progression (d): ";
        std::cin >> step;
        std::cout << "Term number (n): ";
        std::cin >> termNumber;
        std::cout << "Value of n-th term (a_n): ";
        std::cin >> termValue;
        std::cout << "Sum of first n terms (S_n): ";
        std::cin >> sumOfTerms;

        // Case 1: Calculate n if S_n and a_1 + a_n are known
        if (sumOfTerms != -1 && firstTerm != -1 && termValue != -1 && termNumber == -1)
        {
            termNumber = (2 * sumOfTerms) / (firstTerm + termValue);
            std::cout << "Calculated term number (n): " << termNumber << "\n";
        }
        // Case 2: Calculate n if S_n, a_1 and d are known
        else if (sumOfTerms != -1 && firstTerm != -1 && step != -1 && termNumber == -1)
        {
            // Quadratic equation: n = [-1 ± sqrt(1 + 8*S_n/d)] / 2
            double discriminant = 1 + 8.0 * sumOfTerms / step;
            if (discriminant >= 0)
            {
                termNumber = (-1 + static_cast<int>(std::sqrt(discriminant))) / 2; // Taking the positive result
                std::cout << "Calculated term number (n): " << termNumber << "\n";
            }
            else
            {
                std::cout << "Error: Cannot calculate term number (n), negative discriminant.\n";
            }
        }
        // Case 3: Find a_n if a_1, n, and S_n are known
        else if (sumOfTerms != -1 && firstTerm != -1 && termNumber != -1 && termValue == -1)
        {
            termValue = (2 * sumOfTerms / termNumber) - firstTerm;
            std::cout << "Value of " << termNumber << "-th term (a_" << termNumber << "): " << termValue << "\n";
        }
        // Case 4: Find d if a_n and a_1 are known
        else if (termValue != -1 && firstTerm != -1 && termNumber != -1 && step == -1)
        {
            step = (termValue - firstTerm) / (termNumber - 1);
            std::cout << "Calculated step of progression (d): " << step << "\n";
        }
        // Case 5: Calculate a_n and/or S_n if n, a_1 and d are known
        else if (termValue == -1 && termNumber != -1 && firstTerm != -1 && step != -1)
        {
            termValue = firstTerm + (termNumber - 1) * step;
            std::cout << "Value of " << termNumber << "-th term (a_" << termNumber << "): " << termValue << "\n";

            // Calculate S_n = n/2 * (a_1 + a_n)
            sumOfTerms = termNumber * (firstTerm + termValue) / 2;
            std::cout << "Sum of first " << termNumber << " terms (S_" << termNumber << "): " << sumOfTerms << "\n";
        }
        else
        {
            std::cout << "Error: Not enough data to proceed with calculations.\n";
        }

        std::cout << "\nReturning to menu...\n";
        menu();
    }

    void instructions()
    {
        std::cout
        <<"Программа работает по обычным формулам арифметической и геометрической прогрессии\n"
        <<"Формула арифметической прогрессии:\n"
        <<"a_n = a_1 + d(n-1)\n"
        <<"S_n = n(a_1+a_n)/2\n\n";
        std::cin.get();std::cout
        <<"Формула геометрической прогрессии:\n"
        <<"a_n = a_1 * r^n\n"
        <<"S_n = (a_1/r)^n\n\n";
        std::cin.get();std::cout
        <<"Определения:\n"
        <<"a_1 - первый член прогрессии\n"
        <<"n - порядкомый номер члена/суммы членов прогрессии\n"
        <<"a_n - n-ый член прогрессии\n"
        <<"S_n - сумма n-ых членов прогрессии\n"
        <<"d - добавление (арифметическая прогрессия)\n"
        <<"r - умножение (геометрическая прогрессия)\n\n";
        std::cin.get();std::cout
        <<"Пример задачи(арф):\n"
        <<"Бригада маляров красит забор длиной 240 метров, ежедневно увеличивая норму покраски на одно и то же число метров.\n"
          " Известно, что за первый и последний день в сумме бригада покрасила 60 метров забора. \n"
          "Определите, сколько дней бригада маляров красила весь забор\n"
        <<"Дано: S_n = 240; a_1+a_n = 60\n"
        <<"Найти: n\n"
        <<"Решение:\n"
        <<"В имеющейся программе нельзя предоставить параметр суммы a_1 и a_n, поэтому можно дать\n"
          " каждому члену любое значение, которое в сумме даст 60(в таком случае могут быть неточности с параметром d, но с такими исходными его нельзя найти)\n\n";
        std::cin.get();std::cout
        <<"Введя имеющиеся данные в программу можно найти недостающее значение n, от имеющегося n можно будет найти\n"
          " и сумму n членов, но не имея точного значение a_1 и a_n не удастся найти d\n"
        <<"Ответ: n=8           ||S_8 = ";
        std::cin.get();
        menu();
    }
};

#endif // ARITHMETIC_AND_GEOMETRIC_PROGRESSION_H