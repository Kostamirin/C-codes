#include <string>
#include <vector>

// Создает первый столб букавок
void first(std::string s, int numRows, std::vector <char> something, int position){
    for(int i = 0; i <= numRows; i++){
        position ++;
        something.push_back(s[position]);
    }
    // после этого определяется размер вектора который должен быть статичный и не изменяем
}

//! дальше должна быть функция которая имеет i = numRows - 1 || -- в зависимости от условия и идти в низ по числам и вверх на условном графике
void up(std::string s, int numRows, std::vector <char> something, int position){
    for(int i = numRows - 1; i >= 0; i--){
        position ++;
        something[i] += s[position];
    }
}

void down(std::string s, int numRows, std::vector <char> somethign, int position){
    for(int i = 1; i < numRows; i++){
        position ++;
        somethign[i] += s[position];
    }
}

class Solution {
public:
    std::string convert(std::string s, int numRows) {
        
        if (numRows == 1) return s;
        if (s.size() == 1) return s;
        
        std::vector <char> something;// это должен быть строки/строки отвечающие за сохранение символов
        
        // следующая переменная должна отвечать за позицию которая у меня есть для отсчета 
        int position = 0;
        first(s,numRows, something, position);
        do{
            up(s, numRows, something, position);
            down(s,numRows, something, position);
        }while(position !=s.size());
    
    // после этого нужно сделать строку из вектора
    //!std::string result(something.begin(), something.end());
    
    std::string result;
    for (char c : something) {
        result += c;
    }

    return result;
    }
};