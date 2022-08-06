class Solution {
public:
    
    int dfs(vector<vector<char>> &v,int r,int c){
        if(r<0 or c<0 or r==v.size() or c==v[0].size()) return 0;
        if(v[r][c]=='0' or v[r][c]=='2') return 0;
        v[r][c]='2';
        return 1+dfs(v,r+1,c)+
            dfs(v,r-1,c)+
            dfs(v,r,c+1)+
            dfs(v,r,c-1);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int ans=0;
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(dfs(grid,i,j)) ans++;
            }
        }
        return ans;
    }
};