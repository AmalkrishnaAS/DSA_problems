class Solution {
public:
    
    int digit(int n) {
        int ans=0;
        while(n) {
            int dig=n%10;
            ans+=(dig*dig);
            n/=10;
        }
        
        return ans;
    }
    bool isHappy(int n) {
        
        map<int,int> m;
        while(1 ) {
            n=digit(n);
            
            if(n==1) return true;
            if(m[n]) return false;
            m[n]++;
        }
        
        
    }
};