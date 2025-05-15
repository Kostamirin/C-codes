cmake_minimum_required(VERSION 3.30)
project(C-codes)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
  Core
  Gui
  Widgets
  REQUIRED)

add_executable(
        C-codes
        "LeetCode/5. Longest Palindromic Substring.cpp"

)
target_link_libraries(C-codes
  Qt::Core
  Qt::Gui
  Qt::Widgets
)