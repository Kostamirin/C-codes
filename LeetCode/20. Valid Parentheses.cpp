#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else {
                if (stack.empty()) return false; // Если ДА - то нет открывающей скобки
                char top = stack.top(); // Получение верхнего/открывающего элемента
                stack.pop(); // Удаление верхнего/открывающего элемента
                if ((c == ')' && top != '(') || 
                    (c == '}' && top != '{') || 
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return stack.empty();
    }
};

#include <iostream>
int main(){
    Solution Solution;
    std::string s = "([)]";
    std::cout << Solution.isValid(s) << std::endl;
    return 0;
}