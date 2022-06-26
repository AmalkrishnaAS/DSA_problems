class Solution {
public:
    bool checkValid(vector<vector<int>>& a) {
        
        int r=a.size();
        int c=a[0].size();
        
        for(int i=0;i<r;i++)
        {
            
            unordered_map<int,int> m;
            for(int j=0;j<c;j++)
            {
                m[a[i][j]]++;
            }
            
            for(int k=1;k<=r;k++)
            {
                if(not m[k]) return false;
            }
        }
        
        for(int i=0;i<c;i++)
        {
            
            unordered_map<int,int> m;
            for(int j=0;j<r;j++)
            {
                m[a[j][i]]++;
            }
            
            for(int k=1;k<=c;k++)
            {
                if(not m[k]) return false;
            }
        }
        
        return true;
        
        
        
    }
};