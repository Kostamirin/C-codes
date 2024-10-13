#include <iostream>
#include <string>

int main() {
    std::string firstWord, secondWord;

    std::cout << "Enter the first word: ";
    std::cin >> firstWord;

    std::cout << "Enter the second word: ";
    std::cin >> secondWord;

    if (firstWord[0] == secondWord[0]) {
        std::cout << "The first letters of the words are the same." << '\n';
    } else {
        std::cout << "The first letters of the words are different." << '\n';
    }

    return 0;
}
