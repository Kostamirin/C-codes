#include <iostream>

//По условию эта функция была определена ранее
/*struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
*/

class Solution{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummyHead = new ListNode(0);  // Вспомогательная голова списка
        ListNode *current = dummyHead;
        int carry = 0;  // Переменная для хранения переноса
        
        // Проходим по обоим спискам, пока один из них не закончится и пока есть перенос
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            carry = sum / 10;  // Вычисляем новый перенос
            current->next = new ListNode(sum % 10);  // Создаем новый узел с остатком от деления на 10
            current = current->next;  // Переходим к следующему узлу
        }
        
        ListNode *result = dummyHead->next;  // Результат начинается сразу после вспомогательной головы
        delete dummyHead;  // Освобождаем память от вспомогательной головы
        return result;  // Возвращаем указатель на начало результата
    }
};