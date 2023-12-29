class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next = nullptr;

        while (current != nullptr) {
            next = current->next; // Store the next node
            current->next = prev; // Reverse the pointer direction
            prev = current;       // Move prev and current one step forward
            current = next;
        }

        return prev;
    }
};
