# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def insertIntoBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        if not root: return TreeNode(val) #1 or no values
        cur, next = None, root #cur = current node , next = link
        while next: #travesing BST
            cur = next #cur node == root
            next = cur.left if val < cur.val else cur.right
        
        if val < cur.val: 
            cur.left = TreeNode(val)
        else: 
            cur.right = TreeNode(val)
            
        return root
        
        