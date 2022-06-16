class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        
        unordered_map <int,int> m;
        
        for(auto &n:nums)
        {
            m[n]++;
        }
        
        int ref=n/3;
        
        vector<int> ans;
        for(auto &it:m)
        {
            if(it.second>ref)
                ans.push_back(it.first);
        }
        
        return ans;
        
    }
};