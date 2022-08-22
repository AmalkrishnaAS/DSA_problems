class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0 or n==1) return n;
        while(n%3==0)
            n/=3;
           
        return n==1;
        
    }
};