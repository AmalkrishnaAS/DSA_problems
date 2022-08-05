class Solution {
public:
    
    unordered_map<int,int> m;
    
    int dfs(vector<int> &nums,int target){
        if(m.find(target)!=m.end()) return m[target];
        if(target==0) return m[target]=1;
        if(target<0) return m[target]=0;
        int ways=0;
        for(auto &n:nums) ways+=dfs(nums,target-n);
        return m[target]=ways;
    }
    int combinationSum4(vector<int>& nums, int target) {
        
        return dfs(nums,target);
        
    }
};