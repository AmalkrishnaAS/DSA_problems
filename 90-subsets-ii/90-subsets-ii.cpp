class Solution {
public:
    
    vector<vector<int>> ans;
        
        void dfs(vector<int> nums,int idx,vector<int> curr)
        {
            // if(idx==nums.size())
            {
                ans.push_back(curr);
                // return;
            }
            
            for(int i=idx;i<nums.size();i++)
            {
                
                if(i>idx and nums[i]==nums[i-1]) continue;
                
                
                // swap(nums[i],nums[idx]);
                // dfs(nums,idx+1);
                // swap(nums[idx],nums[i]);
                
                curr.push_back(nums[i]);
                dfs(nums,i+1,curr);
                curr.pop_back();
                
                
            }
        }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
        dfs(nums,0,{});
        return ans;
        
        
    }
};