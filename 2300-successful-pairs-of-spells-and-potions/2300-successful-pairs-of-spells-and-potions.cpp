class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        sort(potions.begin(),potions.end());
        
        int n=potions.size();
       
        vector<int> ans;
        
        
        for (int s:spells)
        {
            int l=0,r=n-1;
              int res=n;
            
            while(l<=r)
            {
                int mid=(r+l)/2;
               
                if(1LL*s*potions[mid]>=success) //1LL converts to long long to be prefixed important
                {
                    res=mid;
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
                    
            }
            
            ans.push_back(n-res);
        }
        
        return ans;
        
    }
};