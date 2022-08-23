/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* tmp; 
    
    bool checkpal(ListNode* head){
        if(head == NULL) return true;
        bool ans = checkpal(head->next) & tmp->val == head->val;
        tmp = tmp->next;
        return ans;
    }
    bool isPalindrome(ListNode* head) {
        tmp = head;
        return checkpal(head);
    }
};