class Solution {
public:
    int mirrorReflection(int p, int q) {
        
        int x=__gcd(p,q);
        p/=x;
        q/=x;
        
        if(p%2==0) return 2;
        
        else{
            if(q%2) return 1;
            else return 0;
        }
        
        return 0;
        
    }
};