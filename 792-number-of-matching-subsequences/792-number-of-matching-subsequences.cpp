class Solution {
public:
    unordered_map<string,bool> m;
    bool check(string s,string t) {
        
        if(m.find(s)!=m.end()) return m[s];
        int j=0;
        for(int i=0;i<t.length() and j<s.length();i++){
            if(s[j]==t[i]) j++;
        }
        
        return m[s]=j==s.length();
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        int ans=0;
        for(auto word:words){
            if(check(word,s)) ans++;
        } 
        
        return ans;
    }
};