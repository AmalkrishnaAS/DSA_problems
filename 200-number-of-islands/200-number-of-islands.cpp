class Solution {
public:
    
    int dfs(vector<vector<char>>&grid,int r,int c,int rows,int cols)
    {
        static int count=0;
        if(r<0||c<0||r==rows||c==cols)
            return 0;
        if(grid[r][c]=='0'||grid[r][c]=='2')
                return 0;
       grid[r][c]='2';
                return 1+dfs(grid,r+1,c,rows,cols)+
                dfs(grid,r-1,c,rows,cols)+
                dfs(grid,r,c+1,rows,cols)+
                dfs(grid,r,c-1,rows,cols);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        
        int rows=grid.size();
        int cols=grid[0].size();
        int count=0;
        int ans=0;
        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                count=dfs(grid,i,j,rows,cols);
                if(count>0)
                    ans++;
            }
        }
          
    return ans;
        
    }
};