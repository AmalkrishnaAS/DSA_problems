class Solution {
public:
    
    vector<vector<int>> ans;
    vector<int> curr;
    
    void dfs(vector<int> &nums,int i,vector<int> &curr){
        if(i==nums.size()) {
            ans.push_back(curr);
            return;
        }
        
        
        curr.push_back(nums[i]);
        dfs(nums,i+1,curr);
        
        curr.pop_back();
        dfs(nums,i+1,curr);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(nums,0,curr);
        return ans;
        
        
        
    }
};