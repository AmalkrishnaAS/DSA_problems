class Solution {
public:
    int minimumSum(int num) {
        string s=to_string(num);
        sort(s.begin(),s.end());
        int num1=0,num2=0;
        
        int i=0;
        while(i<s.length()){
            int digit1=s[i]-48;
            num1=num1*10+digit1;
            i++;
            if(i==s.length()) break;
            int digit2=s[i]-48;
            num2=num2*10+digit2;
            i++;
            
            
        }
        
        return num1+num2;
    }
};