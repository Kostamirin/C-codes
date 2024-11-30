#include <iostream>

// class ListNode{
//  public:
//      int value;
//      ListNode* next;
//      ListNode(int val): value(val), next(nullptr) {};
// };
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    for(ListNode* node = head; node != nullptr; node = node->next){
        std::cout <<node->value <<"->";
    }
    std::cout <<'\n';
    return 0;
}