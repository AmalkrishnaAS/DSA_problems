class Solution {
public:
    
    int min(int a,int b){
        return a<b?a:b;
    }
    string longestCommonPrefix(vector<string>& v) {
        string ans="";
        int minlen=INT_MAX; 
         for(string s:v){
             minlen=min(s.size(),minlen);
         }
        for(int i=0;i<minlen;i++){
            char c=v[0][i];
            bool flag=true;
            for(int j=0;j<v.size();j++){
                if(c!= v[j][i]) {flag=false; break;}
            }
            
            
            if(flag) ans+=c;
            else break;
        }
        
        return ans;
        
    }
};