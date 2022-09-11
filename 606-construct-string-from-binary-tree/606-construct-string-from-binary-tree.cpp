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
    
    string ans="";
    void preorder(TreeNode *root) {
        if(not root) {
            
            return;
        }
        
        ans+="(";
        ans+=to_string(root->val);
        
        if(not root ->left and root ->right) ans+="()";
        
        preorder(root->left);
        preorder(root->right);
        ans+=")";
        
    }
    string tree2str(TreeNode* root) {
        preorder(root);
        return ans.substr(1,ans.length()-2);
    }
};