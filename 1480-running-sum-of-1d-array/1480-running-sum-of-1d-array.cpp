class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
        ans[0]=nums[0];
        for(int i=2;i<=nums.size();i++)
        {
            ans[i-1]=nums[i-1]+ans[i-2];
        }
        
        return ans;
    }
};