class Solution {
public:
    
    int dfs(vector<vector<int>> &grid,int r,int c,int m,int n){
        if(r==m or c==n or c<0 or r<0 or not grid[r][c]) return 1;
        if(grid[r][c]==2) return 0;
        grid[r][c]=2;
        
        return dfs(grid,r+1,c,m,n)+
            dfs(grid,r-1,c,m,n)+
            dfs(grid,r,c+1,m,n)+
            dfs(grid,r,c-1,m,n);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    ans=dfs(grid,i,j,m,n);
                    break;
                }
            }
        }
        return ans;
        
    }
};