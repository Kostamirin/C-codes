#include <iostream>
#include <vector>

int main(){
    std::vector<int> something = {1,2,3,4,5};

    something.push_back(6);
    std::cout <<something.capacity() <<std::endl; // Количество элементов которое может поместить vector(обычно на 1 больше size)

    something.reserve(500); // Указывает сколько элементов должно быть в capacity

    std::cout <<something.capacity() <<std::endl;

    something.shrink_to_fit(); // Удаляет неиспользуемые capacity
    std::cout <<something.capacity() <<std::endl;

    return 0;
}