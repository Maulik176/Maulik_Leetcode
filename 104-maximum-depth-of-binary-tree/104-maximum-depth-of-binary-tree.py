# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        def dfs(root, depth):
            #we need to do depth first search becuase the  Maximum Depth of Binary Tree is the distance between the root and the last child 
            if not root: return depth #if there is no root return value of depth
            return max(dfs(root.left, depth+1 ), dfs(root.right, depth+1 ))
        return dfs(root, 0)
        