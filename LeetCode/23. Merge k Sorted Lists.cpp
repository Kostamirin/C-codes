#include <vector>
#include <algorithm>
#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
using namespace std;
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return nullptr;
        while(lists.size() != 1){
            lists.push_back(mergeTwoLists(lists[0], lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
        return lists[0];
    }
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
        current->next = list1 != nullptr ? list1 : list2;
        return head->next;// возвращаем результирующий список
    }
};  

int main(){
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(4);
    head1->next->next = new ListNode(5);
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);
    ListNode* head3 = new ListNode(2);
    head3->next = new ListNode(6);
    std::vector<ListNode*> lists = {head1, head2, head3};
    Solution Solution;
    ListNode* result = Solution.mergeKLists(lists);
    for(ListNode* node = result; node != nullptr; node = node->next){
        std::cout <<node->val <<"->";
    }
    std::cout <<'\n';
    return 0;
}