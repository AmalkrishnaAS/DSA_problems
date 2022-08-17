/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> v;
    void dfs(TreeNode *root) {
        if(not root) return;
        dfs(root->left);
        v.push_back(root->val);
        dfs(root->right);
    }
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        dfs(root);
        int i=upper_bound(v.begin(),v.end(),p->val)-v.begin();
        return *(v.end()-1)==p->val?NULL:new TreeNode (v[i]);
    }
};