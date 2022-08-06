class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(-1);
        ans.push_back(-1);
        int n=nums.size();
        int first=0;
        int last=n-1;
        while(first<=last){
            int mid=(first+last)/2;
            if(nums[mid]==target){
                ans[0]=mid;
                last=mid-1;
            }
            
            else if(target< nums[mid]) last=mid-1;
            else first=mid+1;
            
        }
        first=0;
        last=n-1;
        
         while(first<=last){
            int mid=(first+last)/2;
            if(nums[mid]==target){
                ans[1]=mid;
                first=mid+1;
            }
            
            else if(target< nums[mid]) last=mid-1;
            else first=mid+1;
            
        }
       return ans; 
    }
};