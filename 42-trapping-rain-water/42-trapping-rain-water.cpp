class Solution {
public:
    int trap(vector<int>& v) {
        int n=v.size();
        vector<int> max_r(n),max_l(n),min_lr(n);
        int ans=0;
        
        max_l[0]=0;
        max_r[n-1]=0;
        
        for(int i=1;i<n;i++)
        {
            max_l[i]=max(max_l[i-1],v[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            max_r[i]=max(max_r[i+1],v[i+1]);
        }
        

        
        for(int i=0;i<n;i++)
        {
            min_lr[i]=min(max_l[i],max_r[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            int op=max(0,min_lr[i]-v[i]);
            ans+=op;
        }
        
        return ans;
        
    }
};