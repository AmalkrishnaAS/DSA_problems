class Solution {
public:
    int minimumNumbers(int num, int k) {
        if(num==0) return 0;
        
       if(num%10==0 and k==0) return 1;
        
      
        for(int i=1;i<=10 and i*k<=num;i++)
        {
            if((num-i*k)%10==0) return i;
        }
        return -1;
    }
};