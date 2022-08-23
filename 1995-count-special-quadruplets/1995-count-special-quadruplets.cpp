class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        
        int n=nums.size();
        int ans=0;
        // set<int> s(nums.begin(),nums.end());
        // nums.clear();
        // for(auto &n:s) {
        //     nums.push_back(n);
        // }
        
        for(int i=0;i<n;i++){
            // if(i>0 and nums[i] == nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                // if(j>0 and nums[j] == nums[j-1]) continue;
                
                for(int k=j+1;k<n;k++){
                     // if(k>0 and nums[k] == nums[k-1]) continue;
                    for(int l=k+1;l<n;l++){
                         // if(l>0 and nums[l] == nums[l-1]) continue;
                        if(nums[i]+nums[j]+nums[k]==nums[l])  ans++;
                    }
                }
            }
        }
        return ans;
    }
};