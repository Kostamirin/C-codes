#include <vector>
#include <algorithm>
#include <string>

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head; // Первый узел
        ListNode* fast = head; // Второй узел
        for (int i = 0; i < n; i++) { // Поиск n-го узла
            fast = fast->next;
        }
        if (fast == nullptr) { // Удаление первого узла
            return head->next; // Возвращаем следующий узел -- NULL
        }
        while (fast->next != nullptr) { // Поиск последнего узла
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next; // Удаление последнего узла
        return head;
    }
};
