class Solution {
public:
    string greatestLetter(string s) {
        
        vector<char> lower;
        vector<char> upper;
        char ans=' ';
        for(int i=0;s[i]!=0;i++)
            
            if(islower(s[i]))
        {
            lower.push_back(s[i]);
        }
        for(int i=0;s[i]!=0;i++)
        {
            if(isupper(s[i]))
            {
                // s[i]=tolower(s[i]);
                upper.push_back(s[i]);
            }
        }
        
        for(int i=0;s[i]!=0;i++)
        {
            if(isupper(s[i]))
            {
            if(find(lower.begin(),lower.end(),tolower(s[i]))!=lower.end())
               ans=max( int(toupper(s[i])),int(ans));
                
            }
            
            else
            {
                 if(find(upper.begin(),upper.end(),s[i])!=upper.end())
               ans=max( int(toupper(s[i])),int(ans));
            }
        }
        
        string str(1,ans);
        
        if(ans==' ')
            return "";
        
        return str;
        
        
        
    }
};