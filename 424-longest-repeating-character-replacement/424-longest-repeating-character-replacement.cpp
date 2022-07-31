class Solution {
public:
    
    int get_max(map<char,int> m)
    {
        int ans=0;
        for(auto &it:m)
        {
            ans=max(ans,it.second);
        }
        return ans;
    }
    int characterReplacement(string s, int k) {
        
        
        map<char,int> m;
        
        int ans=0;
        int left=0;
        for(int i=0;s[i]!=0;i++) {
            m[s[i]]++;
            
            if(i-left+1-get_max(m)>k){
                m[s[left]]--;
                left++;
            }
            
            ans=max(ans,i-left+1);
        }
        
        
            
            
        
        return ans;
        
    }
};