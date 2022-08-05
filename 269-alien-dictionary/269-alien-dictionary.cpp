//algo topological sort / post order dfs


class Solution {
public:
    
    unordered_map<char,bool> visit;
    string ans="";
    
    
    bool dfs(map<char,set<char>> &adj,char c){
        if(visit.find(c)!=visit.end()){
            return visit[c];
        }
        
        visit[c]=true;
        
        
        for(auto &n:adj[c]){
            if(dfs(adj,n)){
                return true;
            }
        }
        
        visit[c]=false;
        ans=c+ans;
        return false;
    }
    string alienOrder(vector<string>& words) {
        //construct adj list
        
        map<char,set<char>> adj;
        
        for(auto &word : words){
            for(auto &c:word){
                adj[c]={};
            }
        }
        
        for(int i=0;i<words.size()-1;i++){
            string w1=words[i],w2=words[i+1];
            int minlen=min(w1.length(),w2.length());
            string prefix1(w1.begin(),w1.begin()+minlen);
            string prefix2(w2.begin(),w2.begin()+minlen);
            
            if(prefix1==prefix2 and w1.length()>w2.length() ){
                return "";
            }
            
            for(int j=0;j<minlen;j++){
                if(w1[j]!=w2[j]) {
                    adj[w1[j]].insert(w2[j]);
                    break;
                }
            }
        }
        
        for(auto &c:adj){
            if(dfs(adj,c.first)) return "";
        }
        return ans;
        
        
    }
};