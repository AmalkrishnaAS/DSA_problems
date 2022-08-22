class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1 ) return n;
        while(n!=1) {
            if(n==0) return false;
            if(n%4) return false;
            n/=4;
        }
        
        return true;
        
    }
};