class Solution {
public:
    bool judgeSquareSum(int c) {
        
        if(floor(sqrt(c))==sqrt(c))
        {
            return true;
        }
        for(long int i=0;i*i<=c;i++)
        {
            double a=sqrt(c-i*i);
            
            if(a==int(a))
            {
                return true;
            }
        }
        return false;
    }
};