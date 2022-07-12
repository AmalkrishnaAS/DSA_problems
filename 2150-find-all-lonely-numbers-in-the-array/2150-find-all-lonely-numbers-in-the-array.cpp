class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int ,int> m;
        for(auto &n:nums){
            m[n]++;
        }
        vector<int> ans;
        
        
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]>1 or m[nums[i]+1] or m[nums[i]-1]) continue;
            ans.push_back(nums[i]);
        }
        
        return ans;
    }
};