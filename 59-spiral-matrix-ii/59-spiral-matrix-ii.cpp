class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int top=0,bottom=n-1,left=0,right=n-1;
        
        vector<vector<int>> ans(n,vector<int>(n,0));
        
        int val=1;
        
        while(top<=bottom and left<=right)
        {
            for(int i=left;i<=right;i++) ans[top][i]=val++;
            top++;
            
            
            for(int i=top;i<=bottom;i++) ans[i][right]=val++;
            right--;
            
            
            if(top<bottom and left<right){
                
                
                for(int i=right;i>=left;i--) ans[bottom][i]=val++;
                
                bottom--;
                for(int i=bottom;i>=top;i--) ans[i][left]=val++;
                left++;
            }
            
            
        }
        
        return ans;
                    
        
    }
};