class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        
        int l=0,r=0;
        
        int ans=0;
        while(s[r]!=0) {
            if(m[s[r]]==0){
                ans=max(ans,r-l+1);
                
            m[s[r]]++;
                r++;
                
                
            }
            
            else {
                m[s[l]]--;
                l++;
            }
            
              
            
            
            
          
        }
        
        return ans;
    }
};