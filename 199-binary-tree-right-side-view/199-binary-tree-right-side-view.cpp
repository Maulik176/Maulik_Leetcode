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
    vector<int> solve(TreeNode* root,vector<int> k, int lvl) {
        if(root == NULL){
            return k;
        }
        if( k.size() == lvl){
            k.push_back(root->val);
        }
        k = solve(root->right, k, lvl+1);
        k = solve(root->left, k, lvl+1);
        return k;
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> k;
        k = solve(root,k,0);
        return k;
        
    }
};