// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
   bool dfs(int src,vector<int> adj[],vector<bool> visit,int parent)
  {
      visit[src]=true;
      
      for(auto &it:adj[src])
      {
          if(not visit[it])
          {
              if(dfs(it,adj,visit,src))
                return true;
          }
          else if(parent!=it)
          {
              return true;
          }
      }
      
      return false;
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int v, vector<int> adj[]) {
        
        vector<bool> visit(v,false);
        // code here
        
        for(int i=0;i<v;i++)
        {
            if(dfs(i,adj,visit,-1))
            {
                return true;
            }
        }
        
        // for(auto &it:adj[3])
        // cout<<it<<" ";
        return false;
        // Code here
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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends