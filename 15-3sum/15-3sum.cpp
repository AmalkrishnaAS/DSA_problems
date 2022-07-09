

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> ans;
        
        int n=nums.size();
        int sum=0;
        vector<int> v(nums);
        for(int i=0;i<n;i++)
        {
            if(i>0 and v[i]==v[i-1]) continue;
            
            
            int left=i+1,right=n-1;
            
            
            while(left<right)
            {
                sum=v[left]+v[right]+v[i];
                
                
                if(sum<0)
                {
                    left++;
                }
                
                else if(sum>0) right--;
                
                else {ans.push_back({v[i],v[left],v[right]});
                           
                            left++;
                    while(v[left]==v[left-1] and left<right)
                        left++;
                           }
            }
        }
        
        
        return ans;
        
        
    }
};