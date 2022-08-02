class Solution {
public:
    
    vector<string> ans;
    void dfs(int open,int close,int n,string curr){
        if(curr.length()>=2*n) {
            ans.push_back(curr);
            return;
            
        }
                

        
        if(open<n) dfs( open+1,close,n,curr+'(');
         if(close<open) dfs(open,close+1,n,curr+')');
    }
    vector<string> generateParenthesis(int n) {
        
        dfs(0,0,n,"");
        return ans;
    }
};