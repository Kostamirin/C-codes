cmake_minimum_required(VERSION 3.10)

# Название проекта
project(C-codes VERSION 1.0 LANGUAGES CXX)

# Установка стандарта C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Указываем исходные файлы проекта
set(SOURCES
        "C++ (personal_works)/Прогрессия_арифметическая_и_геометрическая.cpp"
        "C++ (personal_works)/Прогрессия_арифметическая_и_геометрическая.cpp"  # Укажите здесь ваши файлы исходного кода
)

# Создаем исполняемый файл
add_executable(${PROJECT_NAME} ${SOURCES}
        "C++ (personal_works)/Прогрессия_арифметическая_и_геометрическая.cpp"
        "C++ (personal_works)/Прогрессия_арифметическая_и_геометрическая.cpp")

# Дополнительно: Добавьте директории для включаемых файлов (если есть)
# target_include_directories(${PROJECT_NAME} PRIVATE include/)

# Дополнительно: Укажите другие библиотеки, которые нужно связать (если есть)
# target_link_libraries(${PROJECT_NAME} PRIVATE название_библиотеки)