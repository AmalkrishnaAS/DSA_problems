class Solution {
public:
    
    map<int,unsigned long long int> m;
     long long int mod=1e9+7;
    
    unsigned long long int fib(int n)
    {
        if(n<=1) return 1;
        if(m.find(n)!=m.end()) return m[n];
        m[n]= (fib(n-1)+fib(n-2))%mod;
        return m[n];
    }
    int countHousePlacements(int n) {
       
       
        
        unsigned long long int ans=fib(n+1);
        return (ans*ans)%mod;
        
    }
};