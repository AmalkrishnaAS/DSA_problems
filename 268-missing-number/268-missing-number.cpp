class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        //linear soln
        
        
        int ans=0;
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            ans =ans ^ nums[i] ^ (i+1);
        }
        
        return ans;
        
    }
};