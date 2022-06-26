class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& a) {
        
        int r=a.size();
        int c=a[0].size();
        
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i==j or i==c-j-1)
                {
                    if(a[i][j]==0) return false;
                }
                
                else{
                     if(a[i][j]!=0) return false;
                }
            }
        }
        return true;
    }
};