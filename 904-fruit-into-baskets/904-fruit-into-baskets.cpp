class Solution {
public:
    int totalFruit(vector<int>& v) {
        
        int ans=INT_MIN;
        
        
        int l=0,r=0;
        unordered_map<int,int> m;
        
        
        while(r< v.size() ){
            m[v[r]]++;
            
            while(m.size()>2) {
                m[v[l]]--;
                
                if(m[v[l]]==0) m.erase(v[l]);
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        
        return ans;
        
    }
};