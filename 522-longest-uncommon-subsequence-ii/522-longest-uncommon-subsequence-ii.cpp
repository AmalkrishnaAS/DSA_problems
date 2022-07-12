class Solution {
public:
    
    bool check(string s,string t ){
        int i=0;
        int j=0;
        
        int m=s.length();
        int n=t.length();
        
        while(i<m and j<n){
            if(s[i]==t[j]) i++;
            j++;
        }
        
        return i==m;
    }
    int findLUSlength(vector<string>& strs) {
        
        int ans=-1;
       for(int i=0;i<strs.size();i++){
           
           int curr=strs[i].length();
           bool flag=false;
           
           for(int j=0;j<strs.size();j++){
               if(i!=j and check(strs[i],strs[j]) ){
                   flag=true; break;
               }
           }
           
           if(not flag) ans=max(ans,curr);
       }
        
        return ans;
        
    }
};