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
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode *> q;
        if(not root) return {};
        vector<vector<int>> tmp;
        q.push(root);
        while(not q.empty()) {
            int n=q.size();
            vector<int> v;
            for(int i=0;i<n;i++){
                TreeNode *curr=q.front();
                q.pop();
                // if(not curr) {
                //     tmp.push_back(v);
                //     continue;
                // }
                v.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                
            }
            tmp.push_back(v);
        }
        
        reverse(tmp.begin(),tmp.end());
        return tmp;
    }
};