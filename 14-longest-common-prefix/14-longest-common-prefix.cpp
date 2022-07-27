class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
       
        
        int i=0;
        string ans="";
        int len=INT_MAX;
        
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;
            int n=v[i].length();
            len=min(len,n);
        }
        
        
        for(int i=0;i<len;i++)
        {
            char c=v[0][i];
            // bool flag=true;
            for(int j=1;j<v.size();j++)
            {
                if(c!=v[j][i])
                {
                    // flag=false;
                    return ans;
                }
            }
            // if(flag)
                ans=ans+c;
            
        }
      
        return ans;
    }
};