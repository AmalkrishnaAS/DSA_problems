class Solution {
public:
    
     vector<string> ans;
        
        void dfs(string s,int n,int open,int close) {
            if(s.length()==2*n){
                ans.push_back(s);
                return;
            }
            
            if(open<n) dfs(s+"(",n,open+1,close);
            if(close<open) dfs(s+")" ,n,open,close+1);
            
        } 
        
    vector<string> generateParenthesis(int n) {
       dfs("",n,0,0);
        return  ans;
        
    }
};