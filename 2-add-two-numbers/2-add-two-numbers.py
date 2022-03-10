# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        ret = ListNode()
        tail = ret
        carry = 0
        while l1 is not None or l2 is not None:
            l1_val = l1.val if l1 else 0
            l2_val = l2.val if l2 else 0
            aggregate = l1_val + l2_val + carry
            carry = aggregate // 10
            digit = aggregate % 10
        
            tail.next = ListNode(digit)
            tail = tail.next
            
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
            
        if carry != 0:
            tail.next = ListNode(carry)
            tail = tail.next
            
        return ret.next