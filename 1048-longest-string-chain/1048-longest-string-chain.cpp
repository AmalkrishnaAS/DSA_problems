class Solution {
public:
    unordered_map<string,int> m;
   

    int longestStrChain(vector<string>& v) {
        
        int res=-1;
        
        sort(v.begin(),v.end(),[](string a,string b)
             {
                 return a.length()<b.length();
             });
        
        for(auto &word:v)
        {
            m[word]=1;
            
            for(int i=0;word[i]!=0;i++)
            {
                string tmp=word;
                string next=tmp.erase(i,1);
                
                if(m.find(next)!=m.end())
                {
                    m[word]=max(m[word],m[next]+1);
                }
            }
            
            res=max(res,m[word]);
        }
       
        return res;
        
    }
};