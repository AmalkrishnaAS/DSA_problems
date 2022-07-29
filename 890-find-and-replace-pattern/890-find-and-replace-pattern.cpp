class Solution {
public:
    
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
   
        
       map<char,char> mp;
        vector<string> ans;
        set<char> v;
        
        for(string &s:words){
            v.clear();
            mp.clear();
            
            bool flag=true;
            for(int i=0;i<s.size();i++){
                if(v.find(s[i])==v.end() and mp.find(pattern[i])==mp.end()){
                    
                    v.insert(s[i]);
                    mp[pattern[i]]=s[i];
                    
                    
                }
                
                else if(mp[pattern[i]]!=s[i]){
                    
                    flag=false;
                
                    
                    
                    
                }
            }
            
            if(flag) ans.push_back(s);
        }
        
        return ans;
            
           
    }
};