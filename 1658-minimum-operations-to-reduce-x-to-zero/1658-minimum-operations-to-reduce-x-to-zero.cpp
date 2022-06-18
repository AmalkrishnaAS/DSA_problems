class Solution {
public:
    int minOperations(vector<int>& v, int x) {
        int sum=accumulate(v.begin(),v.end(),0);
       
        
        int target=sum-x;
        
        if(target==sum) return v.size();
        if(target<0) return -1;
        sum=0;
        int n=v.size();
        int l=0;
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            
            while(sum>target)
            {
                sum-=v[l];
                l++;
            }
            
            if(sum==target)
            {
                ans=max(ans,i-l+1);
            }
           
        }
        
        return ans==-1?-1:n-ans;
        
    }
};