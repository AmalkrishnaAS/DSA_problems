class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        
        vector<vector<int>> cache;
        int n=v.size();
        int m=v[0].size();
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                
                if(v[i][j]==0) {
                    cache.push_back({i,j});
                }
                
            }
            
        
        }
        int c=cache.size();
        
        for(auto &p:cache) {
            for(int i=0;i<m;i++) v[p[0]][i]=0;
             for(int i=0;i<n;i++) v[i][p[1]]=0;
            
        }
        
    }
};