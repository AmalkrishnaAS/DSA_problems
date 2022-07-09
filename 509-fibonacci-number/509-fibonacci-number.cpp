class Solution {
public:
    
    unordered_map<int,int> m;
    int fib(int n) {
        
        if(m.find(n)!=m.end()) return m[n];
        
        if(n==1) return 1;
        if(!n) return 0;
        
        
        m[n]= fib(n-1)+fib(n-2);
        return m[n];
            
        
    }
};