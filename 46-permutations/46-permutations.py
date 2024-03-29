class Solution {
public:
    
    
    vector <vector<int>> ans;
    
    // void swap(vector<int>&v,int i,int j)
    // {
    //     v[i]=v[i]+v[j];
    //     v[j]=v[i]-v[j];
    //     v[i]=v[i]-v[j];
    // }
 void helper(vector<int>& nums,int index) {
        
        if(index==nums.size())
        {
            ans.push_back(nums);
            return;
         
        }
        
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[i],nums[index]);
            helper(nums,index+1);
            swap(nums[i],nums[index]);
                
        }
        
      
    }
    
   vector<vector<int>> permute(vector<int>& nums) {
       helper(nums,0);
       return ans;
   }
};