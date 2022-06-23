// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
  vector<int> ans;
  void dfs(int src,vector<bool> &visit,vector<int> adj[])
  {
   ans.push_back(src);
      visit[src]=true;
      
      
      
      for(auto &it:adj[src])
      {
          if(not visit[it])
          {
            
            
              dfs(it,visit,adj);
          }
      }
      return;
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        
        
        vector<bool> visit(v,false);
        // Code here
        for(int i=0;i<v;i++)
        if(not visit[i])
        dfs(i,visit,adj);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends