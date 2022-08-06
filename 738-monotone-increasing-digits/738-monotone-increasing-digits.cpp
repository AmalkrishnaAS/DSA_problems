class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        
        string s=to_string(n);
        int mark;
        
        for(int i=s.length()-1;i>=1;i--){
            if(s[i-1]>s[i] ){
                mark=i;
                s[i-1]--;
            }
            
            
        }
        
        for(int i=mark;i<s.length();i++) s[i]='9';
        return stoi(s);
        
    }
};