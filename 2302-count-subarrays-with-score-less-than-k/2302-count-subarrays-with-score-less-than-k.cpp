class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        
        long long sum=0;
        int n=nums.size();
        int y=-1;
        
        int x=0;
        
        
        long long ans=0;
        
        while(x<n)
        {
            if(y<x-1) y=x-1,sum=0;
            
            
            while(y+1<n and (sum+nums[y+1])*(y+1-x+1)<k){
                
              
                y++;
                  sum+=nums[y];
            }
                
                int temp=y-x+1;
        ans+=temp;
            sum-=nums[x];
            x++;
        }
        
        return ans;
        
    }
};