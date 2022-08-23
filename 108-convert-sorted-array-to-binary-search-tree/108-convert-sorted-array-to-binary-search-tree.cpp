class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return fun(nums, 0, nums.size() - 1);
    }
    TreeNode* fun(vector<int>&nums, int i, int j)
    {
        if(i > j)
            return NULL;
        int mid = (i + j) / 2, n = nums.size();
        TreeNode *newNode = new TreeNode(nums[mid]);
        newNode->left = fun(nums,i,mid-1);
        newNode->right = fun(nums,mid+1,j);
        return newNode;
    }
};