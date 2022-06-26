class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int n=v.size();
        int l=0,r=n-k;
        int sum=accumulate(v.begin()+r,v.end(),0);
        int ans=sum;
        // cout<<sum<<" "<<r;
        while(r<n)
        {
            sum+=(v[l]-v[r]);
            ans=max(ans,sum);
            l++;
            r++;
        }
        
        
        return ans;
        
    }
};