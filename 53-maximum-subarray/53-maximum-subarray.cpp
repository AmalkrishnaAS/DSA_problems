class Solution {
public:
    int maxSubArray(vector<int>& v) {
        
        //kadane's algorithm
        
        
        bool flag=false;
        
        
        for(auto &it:v)
        {
            if(it>0)
                flag=true;
        }
        if(!flag)
        {
            return *max_element(v.begin(),v.end());
        }
        
        int current=0,ans=INT_MIN;
        int n=v.size();
        for(auto &it:v)
        {
            current+=it;
            if(current<0)
                current=0;
            ans=max(ans,current);
        }
        
        return ans;
        
    }
};