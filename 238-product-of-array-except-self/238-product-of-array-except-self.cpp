class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n),postfix(n);
        vector<int> op(n);
        
        
        for(int i=0;i<n;i++){
            prefix[i]=(i==0)?nums[i]:prefix[i-1]*nums[i];
            
        }
        for(int i=n-1;i>=0;i--){
            postfix[i]=(i==n-1)?nums[n-1]:postfix[i+1]*nums[i];
        }
        
        op[0]=postfix[1];
        op[n-1]=prefix[n-2];
        
        for(int i=1;i<n-1;i++) op[i]=prefix[i-1]*postfix[i+1];
        return op;
    }
};