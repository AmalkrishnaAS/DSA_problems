class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        int n=nums.size();
        
        while(n>1) {
            n=nums.size();
            vector<int> tmp(n-1);
            
            for(int i=0;i<n-1;i++) {
                tmp[i]=(nums[i]+nums[i+1])%10;
                
            }
            
            nums=tmp;
            
        }
        
        return nums[0];
        
    }
};