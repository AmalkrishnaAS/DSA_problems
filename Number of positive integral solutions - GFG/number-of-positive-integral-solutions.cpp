// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
public:

long factorial(int n)
{
    long f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

    long posIntSol(string s)
    {
        int n=0;
        int equal_index=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='+')
                n++;
            if(s[j]=='=')
                equal_index=j;
        }
    
        string number=s.substr(equal_index+1);
        int k=stoi(number);
        k--;
        long long numberator=1;
    
        for(int j=0;j<n;j++)
        {
            numberator=numberator*(k);
            k--;
    
        }
        long denominator=factorial(n);
        long ans = numberator/denominator;
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.posIntSol(s)<<endl;
    }
    return 0;
}
  // } Driver Code Ends