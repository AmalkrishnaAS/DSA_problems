class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int l,r,res_l,res_r, len=0;
        string ans="";
    for (int i=0;i<n;i++)
    {
        l=i;
        r=i;
        while(l>=0&&r<n&&s[l]==s[r])
        {
             if(len<r-l+1)
           {
               len=r-l+1;
               res_l=l;
               res_r=r;
           }
            l--;
            r++;
        }
        
         l=i;
        r=i+1;
        while(l>=0&&r<n&&s[l]==s[r])
        {
           if(len<r-l+1)
           {
               len=r-l+1;
               res_l=l;
               res_r=r;
           }
            l--;
            r++;
        }
    }
        
     
       copy(s.begin()+res_l,s.begin()+res_r+1,back_inserter(ans));
        return ans;
    }
};