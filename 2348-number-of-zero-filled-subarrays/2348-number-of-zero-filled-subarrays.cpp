class Solution {
    
   
public:
    long long zeroFilledSubarray(vector<int>& v) {
        
        long long ans=0;
       for(auto &it:v) it=abs(it);
        
         map<long long int,long long int> m;
        long long int curr=0;
        unordered_map<long long int, long long int> prevSum;
 
   long long  int res = 0;
 int n=v.size();
        int sum=0;
    
    long long int currSum = 0;
 
    for (int i = 0; i < n; i++) {
 
       
        currSum += v[i];
 
        
        if (currSum == sum)
            res++;
 
      
        if (prevSum.find(currSum - sum) != prevSum.end())
            res += (prevSum[currSum - sum]);
 
       
        prevSum[currSum]++;
    }
 return res;
        
      
        
    }
};