class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        
        vector<int> ans;
        
        
        int top=0;
        int bottom=a.size()-1;
        int right=a[0].size()-1;
        int left=0;
        int dir=0;
        int i;
        
        while(top<=bottom and left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++) ans.push_back(a[top][i]);
                top++;
            }
            
            else if(dir==1){
                for(i=top;i<=bottom;i++) ans.push_back(a[i][right]);
                right--;
            }
            
            else if(dir==2){
                for(i=right;i>=left;i--) ans.push_back(a[bottom][i]);
                bottom--;
            }
            
            else if(dir==3)
            {
                  for(i=bottom;i>=top;i--) ans.push_back(a[i][left]);
                left++;
            }
            dir=(dir+1)%4;
            
        }
        return ans;
        
    }
};