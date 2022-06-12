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
    
    bool dfs(TreeNode * root,int sum,int target)
    {
        if(not root)
            return false;
        
        sum+=root->val;
        if(not root->left and not root->right)
            return sum==target;
        
        return dfs(root->left,sum,target) or dfs(root->right,sum,target);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return dfs(root,0,targetSum);
        
    }
};