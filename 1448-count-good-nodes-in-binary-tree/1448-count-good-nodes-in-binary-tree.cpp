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
    int count = 0;
    void solve(TreeNode* root, int max_node){
        if(root == NULL) return;
        if(root->val >= max_node){
            count++;
        }
        max_node = max(max_node, root->val);
        solve(root->left, max_node);
        solve(root->right, max_node);
    }
    int goodNodes(TreeNode* root) {
        if(root == NULL) return 0;
        solve(root,root->val);
        return count;   
    }
};