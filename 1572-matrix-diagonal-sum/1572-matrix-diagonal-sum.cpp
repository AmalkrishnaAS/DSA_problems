class Solution {
public:
    int diagonalSum(vector<vector<int>>& a) {
        
        int sum=0;
        int r=a.size();
        int c=a[0].size();
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i==j or i==c-j-1) sum+=a[i][j];
            }
        }
        return sum;
    }
};