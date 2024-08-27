#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <array>
#include <cstdlib>
#include <fstream>


int getSize(std::string something){
    int size = 0;
    for(char c : something){
        size++;
    }
    return size;
}
void deleteIndex(char charArray[], int size, int index){
    for (int i = index; i < size - 1; i++) {
        charArray[i] = charArray[i + 1];
    }

    // Уменьшаем размер массива
    --size;
}
int returnNumbers(char charArray[], int cicle, int forNumbers){
    int number;

    if(std::isdigit(charArray[cicle])){
        return number;
    }
    else{
        deleteIndex(charArray,  getSize(charArray), cicle);
        return 0;
    }
}
bool isNumber(char charArray[], int cicle){
    if(std::isdigit(charArray[cicle])){
        return true;
    }
    else{
        return false;
    }
}
bool isChar(char charArray[], int cicle){
    if(std::isdigit(charArray[cicle])){
        return false;
    }
    else{
        return true;
    }

}

void saveNumbers(int array[],char charArray[], int cicle, int forNumbers, int size){
    if(isNumber(charArray, cicle) == true){
        int number = atoi(charArray[cicle]);
        
        if(forNumbers == 0){
            array[cicle] = number;
            forNumbers == 1;
        }
        else if(forNumbers == 1){
            array[cicle] = array[cicle]*10 + number;
            forNumbers = 2;
        }
        else if(forNumbers == 2){
            array[cicle] = array[cicle]*10 + number;
        }
    }
    else if(isChar(charArray, cicle) == true){
        forNumbers = 0;
    }
}

void strToChar(std::string something, char charArray[], int size){
    for(int i =0; i < size; i++){
        charArray[i] = something[i];
    }
}

int main(){
    int array[] = {};
    std::string something;
    std::cout <<"Enter somehing: ";
    std::getline(std::cin, something);
    int forNumbers = 0;
    int len = something.length();
    char charArray[] = {};

    strToChar(something, charArray, len);

    for(int i = 0; i < len; i++){
        saveNumbers(array, charArray, i, forNumbers, len);
        std::vector<int> arra;
        arra.push_back(array[i]);
        auto init = arra[i];
        std::cout <<init <<std::endl;
    }
    return 0;
}