class Solution:
def trimBST(self, root: Optional[TreeNode], low: int, high: int) -> Optional[TreeNode]:
if(root == None) :
return None;
root.left =  self.trimBST(root.left,low,high);
root.right = self.trimBST(root.right,low,high);
if( low <= root.val and root.val <= high ) :
return root;
if root.left != None :
return root.left;
else:
return root.right;