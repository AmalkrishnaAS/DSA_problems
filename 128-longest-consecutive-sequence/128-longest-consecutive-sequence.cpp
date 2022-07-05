class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        
        unordered_set <int> s;
        
        
        for(auto &n:nums)
        {
            s.insert(n);
        }
        int length;
        int ans=0;
        
        for(auto &n:nums)
        {
            if(s.find(n-1)==s.end())
            {
                length=0;
                
                while(s.find(n+length)!=s.end())
                    length++;
                
                ans=max(ans,length);
                
                
            }
        }
        
        return ans;
        
      
    }
};