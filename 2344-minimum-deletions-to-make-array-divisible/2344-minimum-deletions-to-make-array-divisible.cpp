class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& nd) {
        int gcd=nd[0];
        int ans=-1;
        for(int i=0;i<nd.size();i++){
            gcd=__gcd(nd[i],gcd);
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(gcd%nums[i]==0) {
                ans=i;
                break;
            }
        }
        
        return ans;
        
    }
};