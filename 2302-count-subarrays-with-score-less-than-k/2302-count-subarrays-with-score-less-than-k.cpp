class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        
        long long current=0,ans=0;
        int j=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            current+=nums[i];
            
            while(current*(i-j+1)>=k)
            {
                current-=nums[j++];
            }
            
            ans+=i-j+1;
        }
        
        return ans;
        
    }
};