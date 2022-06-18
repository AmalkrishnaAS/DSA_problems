class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end(),std::greater<int>());
        int n=nums.size();
        
        
        // int upper=*max_element(nums.begin(),nums.end());
        
        if(nums[n-1]!=0)
        {
            return 0;
        }
        
        // cout<<upper;
        
        for(int i=1;i<n;i++)
        {
            if(abs(nums[i]-nums[i-1])>1)
            {
                return nums[i]+1;
            }
        }
        
        return n;
        
    }
};