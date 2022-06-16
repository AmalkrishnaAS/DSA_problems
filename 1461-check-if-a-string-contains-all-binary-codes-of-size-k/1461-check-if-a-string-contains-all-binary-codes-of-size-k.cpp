class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        set<string> v;
        int n=s.length();
        
        for(int i=0;i<n-k+1;i++)
        {
            v.insert(s.substr(i,k));
            
        }
        
        
        
        return v.size()==pow(2.0,k);
    }
};