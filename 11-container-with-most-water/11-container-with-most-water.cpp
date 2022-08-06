class Solution {
public:
    int maxArea(vector<int>& v) {
        
        int n=v.size();
        int left=0;
        int right=n-1;
        
        
        int ans=min(v[left],v[right])*(right-left);
        
        
        while(left<right){
            int val=min(v[left],v[right])*(right-left);
            ans=max(ans,val);
            
            
            if(v[left]<v[right]){
                left++;
            }
            
            else right--;
        }
        
        return ans;
        
    }
};