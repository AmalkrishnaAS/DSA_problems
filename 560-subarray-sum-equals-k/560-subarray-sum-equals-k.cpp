class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        
        map<int,int> m;
        int ans=0;
        
        
        int currsum=0;
        m[0]=1;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            ans+=m[currsum-k];
            m[currsum]++;
        }
        
        return ans;
        
    }
};