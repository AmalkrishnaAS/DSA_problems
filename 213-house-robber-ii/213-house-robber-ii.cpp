class Solution {
public:
    
    //extension of house robber 1 exclude v[0] and calculate exclude v[n-1] and calculate and return max
    int rob(vector<int>& nums) {
        
        
        
        int n=nums.size(),first,second;
        
        if(n==1)
            return nums[0];
        vector<int>dp(n+1);
        dp[0]=0;
        dp[1]=nums[0];
        
        for(int i=1;i<n-1;i++)
        {
            if(true)
            dp[i+1]=max(dp[i],nums[i]+dp[i-1]);
        }
        first= dp[n-1];
        dp.clear();
        cout<<first<<endl;
        
        dp.clear();
      
      
        
        nums.erase(nums.begin());
        
//         for(auto &it:nums)
//             cout<<it<<endl;
        n=nums.size();
        dp.resize(n+1);
        
        dp[0]=0;
        dp[1]=nums[0];
        
        for(int i=1;i<n;i++)
        {
            
            dp[i+1]=max(dp[i],nums[i]+dp[i-1]);
        }
        second= dp[n];
        cout<<second;
    
    
    return max(first,second);
    }
};