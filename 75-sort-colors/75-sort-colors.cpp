class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        
        
        int count_0=0,count_1=0,count_2=0;
        
        for(auto &n:nums)
        {
            
            if(n==0)
                count_0++;
            
            else if(n==1)
                count_1++;
            else
                count_2++;
            
            
            
        }
        
        int n=count_0+count_1+count_2;
        
        for(int i=0;i<n;i++)
        {
            if(count_0)
            {
                nums[i]=0;
                count_0--;
            }
                
                else if(count_1)
                {
                    nums[i]=1;
                    count_1--;
                }
            
            else
            {
                nums[i]=2;
                count_2--;
            }
        }
        
       
        
    }
};