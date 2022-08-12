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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        TreeNode *selected=root;
        
        while(selected)
        {
            if(q->val >selected->val and p->val>selected->val)
                selected=selected->right;
            
            else   if(q->val <selected->val and p->val<selected->val)
                selected=selected->left;
            
            else
                return selected;
        }
        return NULL; 
    }
};