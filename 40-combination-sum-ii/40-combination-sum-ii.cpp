class Solution {
public:
    
    vector<vector<int>> ans;
    vector<int> curr;
    
    
    void dfs(vector<int> &nums,vector<int> &curr,int idx,int total,int target) {
        if(total==target) {
            ans.push_back(curr);
        }
        
        for(int i=idx;i<nums.size();i++){
            if(i>idx and nums[i]==nums[i-1]) continue;
            
            if(total>target) break;
            
            curr.push_back(nums[i]);
            total+=nums[i];
            dfs(nums,curr,i+1,total,target);
            curr.pop_back();
            total-=nums[i];
            // dfs(nums,curr,i+1,total,target);  ????
            
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        dfs(nums,curr,0,0,target);
        return ans;
    }
};