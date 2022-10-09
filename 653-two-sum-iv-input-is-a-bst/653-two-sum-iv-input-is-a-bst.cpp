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
    vector<int> res;
    void dfs(TreeNode *root){
        if(!root){
            return;
        }
        res.push_back(root->val);
        if(root->left) dfs(root->left);
        if(root->right) dfs(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        dfs(root);
        map<int, int> hash;
        for(int i=0; i<res.size(); i++){
            if(hash.find(res[i]) != hash.end()){
                return true;
            } else {
                hash[k - res[i]] = i;
            }
        }
        return false;
    }
};