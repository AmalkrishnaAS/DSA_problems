// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int v[], int n) {
	    // code here
	   ;
        
        if(n==0) return 0;
        if(n==1) return v[0];
        if(n==2) return max(v[0],v[1]);
        
        vector<int> dp(n,0);
        
        
        dp[0]=v[0];
        dp[1]=max(v[0],v[1]);
        
        for(int i=2;i<n;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+v[i]);
        }
        
        return dp[n-1];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends