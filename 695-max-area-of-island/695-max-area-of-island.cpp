class Solution {
public:
    
    int count=0;
    
    int dfs(vector<vector<int>>&grid,int r,int c,int rows,int cols)
    {
        if(r<0||c<0||r==rows||c==cols)
            return 0;
        if(grid[r][c]==0||grid[r][c]==2)
                return 0;
       grid[r][c]=2;
                return 1+dfs(grid,r+1,c,rows,cols)+
                dfs(grid,r-1,c,rows,cols)+
                dfs(grid,r,c+1,rows,cols)+
                dfs(grid,r,c-1,rows,cols);
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int rows=grid.size();
        int cols=grid[0].size();
        int count=0;
        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                count=max(count,dfs(grid,i,j,rows,cols));
            }
        }
        return count;
        
    }
};