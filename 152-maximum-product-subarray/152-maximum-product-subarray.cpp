class Solution {
public:
    
    int max_3(int a,int b,int c)
    {
        int ans=INT_MIN;
        ans=max(a,b);
        ans=max(ans,c);
        
       return ans; 
    }
    
     int min_3(int a,int b,int c)
    {
        int ans=INT_MAX;
        ans=min(a,b);
        ans=min(ans,c);
        
       return ans; 
    }
    int maxProduct(vector<int>& nums) {
        
        int current_min=1,current_max=1,ans=INT_MIN;
        
        for(auto &n:nums)
        {
            // if(n==0)
            // {
            //     current_max=1;
            //     current_min=1;
            //     continue;
            // }
            
            int temp=current_max*n;
            
            current_max=max_3(n,n*current_max,n*current_min);
            current_min=min_3(n,n*current_min,temp);
            ans=max(ans,current_max);
        }
        
        return ans;
        
        
        
        
    }
};