class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int> s(nums.begin(),nums.end());
        int ans=0;
        for(auto &n:s){
            int length=0;
            if(s.find(n-1) ==s.end()){
                while(s.find(n+length)!=s.end()) length++;
                ans=max(ans,length);
            }
        }
        return ans;
    }
};