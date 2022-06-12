class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        unordered_map<string,int> m1,m2;
        int ans=0;
        for(auto &s:words1)
        {
            m1[s]++;
        }
        
        for(auto &s:words2)
        {
            m2[s]++;
        }
        for(auto &s:words1)
        {
            if(m1[s]==1 and m2[s]==1)
                ans++;
                
        }
        
        return ans;
        
        
    }
};