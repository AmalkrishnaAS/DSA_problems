class Solution {
public:
    int search(vector<int>& nums, int target) {
        
       
        
        int l=0,r=nums.size()-1;
        int mid;
        
        while(l<=r)
        {
            mid=(l+r)/2;
            
            if(target==nums[mid])
            {
                return mid;
            }
            
            else if(nums[l]<=nums[mid])          //left is sorted
            {
                if(target<nums[l] or target>nums[mid])
                {
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
            
             else        //right is sorted
            {
                if(target>nums[r] or target<nums[mid])
                {
                 r=mid-1;
                }
                else
                {
                      l=mid+1;
                }
            }
            
            
        }
        
        return -1;
        
    }
};