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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        bool flag =false; //go forward
        
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        vector<int> v;
        
        
        if(not root) return {};
        
        
        q.push(root);
        
        while(not q.empty()){
            int n=q.size();
            v.clear();
            for(int i=0;i<n;i++){
                TreeNode *curr=q.front();
                q.pop();
                v.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            if(not flag){
                ans.push_back(v);
                flag=true;
            }
            else{
                reverse(v.begin(),v.end());
                ans.push_back(v);
                flag=false;
            }
        }
        
        return ans;
        
    }
};