//
// Created by kley-muner on 1/29/25.
//
#include <vector>
#include <cmath>

class something{
public:
    // функция выдает значение цифры
    static std::vector<int> base(int a){
        std::vector<int> digits;
        while (a > 0) {
            digits.push_back(a % 10);
            a /= 10;
        }
        std::reverse(digits.begin(), digits.end());
        return digits;
    }

    // функция добавляет необходимое количество цифр, относительно проверенного числа(одного)
    static std::vector<int> change(std::vector<int> & answer, std::vector<int> base){
        for (int i = 0; i < base.size(); i++)
        {
            switch (base[i])
            {
            case 1:
                answer[0] ++;
                break;
            case 2:
                answer[1] ++;
                break;
            case 3:
                answer[2] ++;
                break;
            case 4:
                answer[3] ++;
                break;
            case 5:
                answer[4] ++;
                break;
            case 6:
                answer[5] ++;
                break;
            case 7:
                answer[6] ++;
                break;
            case 8:
                answer[7] ++;
                break;
            case 9:
                answer[8] ++;
                break;
            case 0:
                answer[9] ++;
                break;
            default:
                break;
            }
        }
        return answer;
    }

};