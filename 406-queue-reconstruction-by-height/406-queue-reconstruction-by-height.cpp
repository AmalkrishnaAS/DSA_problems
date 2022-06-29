class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        
        int n=people.size();
        
        vector<vector<int>> ans(n,vector<int>(2,-1));
        sort(people.begin(),people.end(),[](vector<int> a,vector<int> b){
            return a[0]<b[0];
        } );
        
        for(int i=0;i<n;i++)
        {
            int curr=people[i][1];
            
            for(int j=0;j<n;j++){
                
                if(ans[j][0]==-1 and curr==0)
                {
                    ans[j]=people[i];break;
                }
               else if(ans[j][0]==-1 or ans[j][0]>=people[i][0])
                {
                    curr--;
                }
            }
            
            
        }
        return ans;
        
    }
};