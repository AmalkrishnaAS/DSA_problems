class Solution {
public:
    int getSum(int a, int b) {
        
       
         while(b)
         {
             long long unsigned tmp=(long long unsigned)(a&b)<<1;
             a=a^b;
             b=tmp;
         }
        
        return a;
        
    }
};