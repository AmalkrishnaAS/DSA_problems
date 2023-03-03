class Solution {
public:
    int check(string haystack,string needle,int i)
    {
        for(int j=0; j<needle.length();j++)
        {
            if (haystack[j+i]!=needle[j])
            {
                return -1;
            }
        }
        return i;
        
    }
    
    int strStr(string haystack, string needle) {
        int len1=haystack.length();
        int len2=needle.length();
        int ans=-1;
        
        if(len1<len2)
        {
            return -1;
        }
        for(int i=0;i<haystack.length();i++)
        {
            if(haystack[i]==needle[0])
            {
                ans=check(haystack,needle,i);
                if(ans>-1)
                    return ans;
            }
        }
        return ans;
    }
};