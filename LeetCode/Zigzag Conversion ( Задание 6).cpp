#include <string>
#include <vector>

//!         КОД НЕ РАБОТАЛ ИСПОЛЬЗУЯ ФУНКЦИИ НАХОДИЩИЕСЯ ВНЕ КЛАССА
//!         КОД НЕ РАБОТАЛ ИСПОЛЬЗУЯ ФУНКЦИИ НАХОДИЩИЕСЯ ВНЕ КЛАССА



class Solution {
public: 
    std::string convert(std::string s, int numRows) {
        if (numRows == 1 || s.size() == 1) return s;

        std::vector <std::string> something(numRows);// это должен быть строки/строки отвечающие за сохранение символов
        
        // следующая переменная должна отвечать за позицию которая у меня есть для отсчета 
        int position = 0;
        while(position != s.size())
        {
            for(int i = 0; i < numRows; i++){
                //Если позиция не привышает размер текста то зиг-заг будет продолжаться
                if(position < s.size()){
                    something[i] += s[position];
                    position ++;
                }
            }
            //! Не знаю почему здесь испоьзуется -2, но именно из-за этого все заработало!
            for(int i = numRows - 2; i > 0; i--){
                // Если позиция не больше размера текста то код будет продолжаться, иначе зиг-заг не дойдет до конца
                if(position < s.size()){
                    something[i] += s[position];
                    position ++;
                }
            }
        }
    
    // после этого нужно сделать строку из вектора
    //!std::string result(something.begin(), something.end());
    
    std::string result;

    for(int i = 0; i < something.size(); i++){
        result += something[i];
    }


    return result;
    }
};
#include <iostream>
// Добавляем функцию main для локального тестирования
int main() {
    std::string something = "skeaitmsngsueisk";
    int rows = 5;

    // Создаем объект класса Solution
    Solution solution;
    // Передаем тестовые значения в функцию convert
    std::string result = solution.convert(something, rows);

    // Вывод результата
    std::cout << "Result: " << result << std::endl;

    return 0;
}