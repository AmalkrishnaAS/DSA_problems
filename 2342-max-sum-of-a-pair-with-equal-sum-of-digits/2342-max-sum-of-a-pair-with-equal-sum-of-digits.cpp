class Solution {
public:
    
    int calcSum(int num){
        int digit=0,sum=0;
        while(num){
            digit=num%10;
            sum+=digit;
            num/=10;
        }
        
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> m;
        unordered_map<int,int> count;
        sort(nums.begin(),nums.end(),greater<int>());
        for(auto &it:nums){
              int sum=calcSum(it);
            
            if(count[sum]==2) continue;
          
            count[sum]++;
            m[sum]+=it;
        }
        
        int ans=-1;
        for(auto &it:m){
            if(count[it.first]>1)
            ans=max(ans,it.second);
        }
        
        return ans;
        
        
        
    }
};