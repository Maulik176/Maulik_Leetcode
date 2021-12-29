# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        if not l1:
            return l2
        if not l2:
            return l1
        p1, p2, hold = l1, l2, None
        l3 = l1 if l1.val <= l2.val else l2
        while p1 and p2:
            if p1.val <= p2.val:
                if p1.next and p1.next.val <= p2.val:
                    p1 = p1.next
                else:
                    hold = p1.next
                    p1.next = p2
                    p1 = hold
            else:
                if p2.next and p2.next.val < p1.val:
                    p2 = p2.next
                else:
                    hold = p2.next
                    p2.next = p1
                    p2 = hold
        
        return l3
        