class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool flag=false;
        int n=nums.size();
        for (int i=0;i<n-1;i++)
        {
            if(nums[i+1]>=nums[i]) continue;
            if(flag) return false;
            
            // [3,4,2]
            
            
            if(i==0 or nums[i-1]<=nums[i+1]) nums[i]=nums[i+1];
            else
               nums[i+1]=nums[i];
            
            flag=true;
        }
        return 1;
    }
};