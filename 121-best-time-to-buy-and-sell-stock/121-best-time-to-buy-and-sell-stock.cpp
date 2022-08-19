class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min__far=prices[0];
        int ans=0;
        
        for(auto &n:prices) {
            ans=max(ans,n-min__far);
            min__far=min(n,min__far);
            
        }
        
        return ans;
    }
};