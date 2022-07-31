class Solution {
public:
    int maxArea(vector<int>& v) {
        
        int n=v.size();
        int left=0;
        int right=n-1;
        int ans=0;
        while (left<right) {
            ans=max(ans,min(v[right],v[left])*(right-left));
            if(v[left]<v[right]) left++;
            else right--;
        }
        
        return ans;
    }
};