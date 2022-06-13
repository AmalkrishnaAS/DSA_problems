class Solution {
public:
    bool matchReplacement(string s, string sub, vector<vector<char>>& mappings) {
        
        int n=s.size();
        int m=sub.size();
        vector<vector<bool>> allowed(256,vector<bool>(256,false));
        
        for(int i=0;i<256;i++)
        {
            allowed[i][i]=true;
        }
        
        for(auto x:mappings)
        {
            allowed[x[0]][x[1]]=true;
        }
        
        for(int i=0;i<=n-m;i++)
        {
            bool flag=true;
            
            
            for(int j=0;j<m;j++)
            {
                if(not allowed[sub[j]][s[i+j]])
                {
                    flag=false;
                }
            }
            
            if(flag) return true;
        }
        return false;
    }
};