class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;
    
    void dfs(vector<int> &nums,vector<int> &curr,int i,int total,int target) {
        if(i==nums.size() or total>target) {
            return;
        }
        if(total==target) {
            ans.push_back(curr);
            return;
        }
        
        curr.push_back(nums[i]);
        total=total+nums[i];
        dfs(nums,curr,i,total,target);
        curr.pop_back();
        total-=nums[i];
        dfs(nums,curr,i+1,total,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        dfs(candidates,curr,0,0,target);
        return ans;
        
        
    }
};