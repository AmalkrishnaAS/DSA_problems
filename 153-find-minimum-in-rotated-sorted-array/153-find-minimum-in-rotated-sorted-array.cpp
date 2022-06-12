class Solution {
public:
    int findMin(vector<int>& v) {
        int l=0,r=v.size()-1;
        int mid;
        int ans=INT_MAX;
        while(l<=r)
        {
            
            if(v[l]<v[r])
            {
                ans=min(ans,v[l]);
            }
            mid=(l+r)/2;
            ans=min(ans,v[mid]);
            if(v[l]<=v[mid])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        
        return ans;
        
    }
};