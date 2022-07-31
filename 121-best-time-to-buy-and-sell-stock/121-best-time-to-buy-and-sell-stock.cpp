class Solution {
public:
    int maxProfit(vector<int>& nums) {
        
        int small=nums[0];
        int ans=0;
        for(auto &n:nums) {
            small =min(small,n);
            ans=max(ans,n-small);
        }
        
        return ans;
        
    }
};