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
    
    double avg(vector<double> v){
        
        double sum=0;
        sum=accumulate(v.begin(),v.end(),sum);
        double n=v.size();
        return double(sum/n);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode *> q;
        vector<double> ans;
        q.push(root);
        
        while(not q.empty()) {
            int n=q.size();
            vector<double> v;
            for(int i=0;i<n;i++) {
                TreeNode *curr=q.front();
                q.pop();
                
                v.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                
            }
            
            ans.push_back(avg(v));
        }
        
        
        return ans;
    }
};