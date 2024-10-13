#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string inputText;
    std::cout << "Введите текст: ";
    std::getline(std::cin, inputText);

    std::vector<int> numbers;

    for (size_t i = 0; i < inputText.size(); ++i) {
        if (isdigit(inputText[i])) {
            int num = std::stoi(inputText.substr(i));
            numbers.push_back(num);
            i += std::to_string(num).size();
        }
    }

    if (numbers.size() > 0) {
        std::cout << "Найденные числа: ";
        for (int number : numbers) {
            std::cout << number << " ";
        }
        std::cout <<'\n';
    } else {
        std::cout << "Не найдено ни одного числа.";
    }

    return 0;
}