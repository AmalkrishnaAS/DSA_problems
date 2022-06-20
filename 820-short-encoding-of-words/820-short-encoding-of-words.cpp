class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        
        sort(words.begin(),words.end(),[](string a,string b){
            return a.length()>b.length();
        });
        
        string ans="";
        for(auto &word:words)
        {
            if(ans.find(word+"#")==string::npos)
            {
                ans=ans+word+"#";
            }
        }
        
        cout<<ans;
        
        return ans.length();
        
    }
};