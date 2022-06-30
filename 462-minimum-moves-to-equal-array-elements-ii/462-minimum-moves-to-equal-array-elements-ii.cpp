class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        int n=nums.size();
        int median=INT_MAX;
        if(n%2==0) {
            (nth_element(nums.begin(),nums.begin()+n/2,nums.end()));
            nth_element(nums.begin(),nums.begin()+(n-1)/2,nums.end());
            median=nums[(n/2+(n-1)/2)/2];
        }
        
        else
        {
            nth_element(nums.begin(),nums.begin()+n/2,nums.end());
            median=nums[n/2];
        }
        
        int ans=0;
        for(auto &it:nums) ans+=abs(it-median);
        
        
        return ans;
        
    }
};