class Solution {
public:
    
    int digit(string s) {
        int ans=0;
        int i=0;
        while(s[i]!=0) {
            int dig=s[i]-48;
            ans+=dig;
            i++;
        }
        
        return ans;
    }
    string digitSum(string s, int k) {
        
        while(s.size()>k){
        vector<string> ans;
        string fill="0";
        for(int i = 0 ; i <s.size() ; i+=k){
            string temp = s.substr(i,k);
            ans.push_back(temp);
        }
        while (ans.back().size() != k){
		    ans.back() += fill;
        }
        
        string res;
        
        for(auto &c:ans) {
            
            int sum=digit(c);
            res+=to_string(sum);
            
            // cout<<c<<endl;
            
        }
        
        s= res;
            
        }
        
        return s;
        
    }
};