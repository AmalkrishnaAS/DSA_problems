class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        
        int n=v.size();
        
        vector<int> res(n,1);
        
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i+1;j<n;j++)
            {
                if(v[i]<v[j])
                    res[i]=max(res[i],1+res[j]);
                    
            }
        }
        
        return *max_element(res.begin(),res.end());
        
    }
};