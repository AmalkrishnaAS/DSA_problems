class Solution {
public:
    bool findRotation(vector<vector<int>>& matrix, vector<vector<int>>& target) {
        
         int n=matrix.size();
        
        for(int i=0;i<4;i++)
        {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            std::reverse(matrix[i].begin(),matrix[i].end());
        }
            
            if(matrix==target) return true;
        
    }
        
    
        return false;
    }
};