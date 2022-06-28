class Solution {
public:
    int minDeletions(string s) {
        
        unordered_map<char,int> m;
        
      for(int i=0;s[i]!=0;i++) m[s[i]]++; 
        
        int ans=0;
        
        unordered_set<int> seen;
        
        
        for(int i=0;i<26;i++)
        {
            
            char c= 97+i;
            while(m[c] and seen.find(m[c])!=seen.end()){
                m[c]--;
                ans++;
            }
            
            seen.insert(m[c]);
        }
     return ans;  
    }
};