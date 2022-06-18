class Solution {
public:
    int subarraySum(vector<int>& nums, int sum) {
        
        int currsum=0;
        int ans=0;
        unordered_map<int,int> m;
        m[0]=1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            currsum+=nums[i];
            ans+=m[currsum-sum];
            m[currsum]++;
        }
        
        return ans;
        
    }
};