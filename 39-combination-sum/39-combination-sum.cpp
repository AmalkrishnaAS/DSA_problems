class Solution {
public:
    
    vector<vector<int>> ans;
    
    void dfs(vector<int> &nums,vector<int> &curr,int total,int target,int i){
        if(total==target ){
            ans.push_back(curr);
            return;
        } 
           if(i==nums.size() or total>target) return;
        curr.push_back(nums[i]);
        total+=nums[i];
        dfs(nums,curr,total,target,i);
        curr.pop_back();
        total-=nums[i];
        dfs(nums,curr,total,target,i+1);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<int> curr={};
        dfs(nums,curr,0,target,0);
        return ans;
    }
};