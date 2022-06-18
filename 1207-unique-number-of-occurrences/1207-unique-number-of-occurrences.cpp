class Solution {
public:
    bool uniqueOccurrences(vector<int>& v) {
        
        unordered_map<int,int> m;
        
        
        for(auto &it:v)
        {
            
            m[it]++;
        }
        
       unordered_map<int,int> m1;
        
        for(auto &it:m)
        {
            if(m1[it.second]) return false;
            m1[it.second]++;
        }
        
        return true;
    }
};