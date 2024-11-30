#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
        ListNode *head = new ListNode(0);
        ListNode *current = head;
        while(list1 != nullptr && list2 != nullptr){ // пока оба списка не закончились
            if(list1->val < list2->val){            //* если первый список меньше
                current->next = list1;              // добавляем его в результирующий список
                list1 = list1->next;                // и переходим на следующий элемент
            }
            else{                                   //*если второй список меньше
                current->next = list2;              // добавляем его в результирующий список
                list2 = list2->next;                // и переходим на следующий элемент
            }
            current = current->next;                //* не зависимо от условия переходим к следующему узлу
        }
        if(list1 != nullptr){                       //* если первый список закончился, то добавляем в результирующий список второй
            current->next = list1;                  
        }
        else{
            current->next = list2;                  //* если второй список закончился, то добавляем в результирующий список первый
        }
        return head->next;// возвращаем результирующий список
    }
};

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);
    Solution Solution;
    ListNode* result = Solution.mergeTwoLists(head, head2);
    for(ListNode* node = result; node != nullptr; node = node->next){
        std::cout <<node->val <<"->";
    }
    std::cout <<'\n';
    return 0;
}