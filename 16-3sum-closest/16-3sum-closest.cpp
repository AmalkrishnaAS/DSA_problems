class Solution {
public:
    int threeSumClosest(vector<int>& v, int target) {
        int n=v.size();
        int sum;
        int min=INT_MAX;
        sort(v.begin(),v.end());
        int ans=0;
        
        for(int i=0;i<n-1;i++)
        {
            int l=i+1,r=n-1;
            while(l<r)
            {
            sum=v[i]+v[l]+v[r];
            if(sum==target) return sum;
            else if(sum<target) l++;
            else r--;
            
            if(abs(sum-target)<min) {ans=sum;
            min=abs(sum-target);
        }
            
        }
        }
        
        return ans;
        
    }
};