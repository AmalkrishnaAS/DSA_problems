class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        unordered_map<int,int> m;
        
        int n=nums.size();
        int current=0,ans=INT_MIN;
        int l=0;
       int r=0;
        
        // unordered_map<int,int> m;
        while(r<n and l<=r)
        {
            if(m[nums[r]]>0)
            {
                m[nums[l]]--;
                current-=nums[l];
                l++;
                continue;
            }
        current+=nums[r];
            m[nums[r]]++;
        // cout<<current<<endl;
        ans=max(ans,current);
            r++;
        }
        
        return ans;
    }
};