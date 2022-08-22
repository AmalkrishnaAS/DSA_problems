class Solution {
public:
    
    typedef long long ll;
    long long subArrayRanges(vector<int>& v) {
        
        
    int mini,maxi;
        ll ans=0;
        for(int i=0;i<v.size();i++){
            mini=v[i];
            maxi=v[i];
            for(int j=i;j<v.size();j++){
                mini=min(mini,v[j]);
                maxi=max(maxi,v[j]);
                ans+=(maxi-mini);
            }
            
            
        }
        
        return ans;
        
    }
};