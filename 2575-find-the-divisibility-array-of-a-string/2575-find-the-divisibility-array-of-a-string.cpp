class Solution {
public:
    vector<int> divisibilityArray(string s, int m) {
        vector<int> ans;
        long long int prevRem=0;
        int rem;
        for(auto &c:s) {
            long long int curr=c-48;
            long long int dividend=prevRem*10+curr;
            rem=dividend%m;
            if(rem) ans.push_back(0); else ans.push_back(1);
            prevRem=rem;
            
            
        } 
        
        return ans;
        
    }
};