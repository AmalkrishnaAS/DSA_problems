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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(not root)
            return {};
        
        queue<TreeNode *> q;
        vector<vector<int>> ans;
        
        
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
             vector<int> v;
            for(int i =0;i<n;i++)
            {
               
                TreeNode *selected=q.front();
                q.pop();
                v.push_back(selected->val);
                
                if(selected->left) q.push(selected->left);
                if(selected->right) q.push(selected->right);
                
                
                
                
            }
            ans.push_back(v);
            v.clear();
            
            
        }
        return ans;
    }
};