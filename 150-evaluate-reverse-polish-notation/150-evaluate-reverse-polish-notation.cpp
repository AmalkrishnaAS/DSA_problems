class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto & c:tokens)
        {
            
                if(c=="+" or c=="-" or c=="/" or c=="*" or c=="-")
                {
                     int n1=s.top();s.pop();
                     int n2=s.top();s.pop();
                    
                    
                    if(c=="+")
                        s.push(n1+n2);
                    else if(c=="-")
                        s.push(n2-n1);
                    else if(c=="*")
                        s.push(n2*n1);
                    else
                        s.push(n2/n1);
                }
            
            else
            {
                s.push(stoi(c));
            }
                
            }
        
        
        return s.top();
        
    }
};