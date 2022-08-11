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
    
    vector<int> sorted;
    bool check(vector<int> &sorted){
        int i=0,j=1;
        while(j<sorted.size()){
            if(sorted[i]==sorted[j]) return false;
            i++;
            j++;
        }
        return true;
    }
    void inorder(TreeNode *root){
        if(not root) return;
        inorder(root->left);
        sorted.push_back(root->val);
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        
        inorder(root);
        
        return is_sorted(sorted.begin(),sorted.end()) and check(sorted);
    
    }
};