class Solution {
public:
    
    vector<vector<int>> ans;
    vector<int> curr;
    void dfs(vector<int> &nums,vector<int> &curr,int idx){
        ans.push_back(curr);
        
        
        for(int i=idx;i<nums.size();i++){
            if(i>idx and nums[i]==nums[i-1]) continue;
            curr.push_back(nums[i]);
            dfs(nums,curr,i+1);
            curr.pop_back();
            
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        dfs(nums,curr,0);
        return ans;
        
    }
};