class Solution {
public:
    
    //\U0001f622
    int countPrimes(int n) {
        
        if(not n) return 0;
        vector<bool> prime(n+1,true);
        prime[0]=prime[1]=false;
        int ans=0;
        for(int i=2;i<n;i++){
            if(prime[i]) ans++;
            for(int j=2*i;j<=n;j+=i) prime[j]=false; 
        }
        return ans;
        
    }
};