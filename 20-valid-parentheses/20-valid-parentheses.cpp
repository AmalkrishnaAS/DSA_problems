class Solution {
public:
    bool isValid(string s) {
        map<char,char> m={
            {']','['},
            {'}','{'},
            {')','('}
        };
        
        stack<char> st;
        for(auto &c:s){
            if(c=='[' or c=='{' or c=='(') st.push(c);
            else {
                if(st.empty() or st.top()!=m[c]) return false;
                st.pop();
            }
            
        }
        return st.empty();
    }
};