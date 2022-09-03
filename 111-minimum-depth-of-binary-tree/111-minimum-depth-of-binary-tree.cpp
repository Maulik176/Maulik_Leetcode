/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        return minlevel(root,1);
    }
    
    int minlevel(TreeNode* root, int level){
        if(root->left==NULL && root->right==NULL) return level;
        else if(root->left==NULL) return minlevel(root->right, level+1);
        else if(root->right==NULL) return minlevel(root->left, level+1);
        else return min(minlevel(root->left, level+1), minlevel(root->right, level+1));
    }
};