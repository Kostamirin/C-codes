#include <vector>
#include <string>


void backtrack(vector<string>& result, string current, int open, int close, int max) {
        if (current.size() == max * 2) {
            result.push_back(current);
            return; // Переход к вызывающей функции - generateParenthesis
        }
        
        if (open < max) {
            backtrack(result, current + "(", open + 1, close, max); // добавляет открывающую скобку и +1 в кол-во открытых скобок
        }
        
        if (close < open) {
            backtrack(result, current + ")", open, close + 1, max); // добавляет закрывающую скобку и +1 в кол-во закрытых скобок
        }
        //так значения приближаются к максимальному кол-ву скобок
    }


using namespace std;
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n); //Этот метод запускает рекурсивный процесс генерации скобок
                                        //рекурсивный - может запускать сам себя с другими аргументами и/или несколько раз
        
        return result;
    }
};