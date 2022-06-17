// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

bool check(vector<int> adj[],vector<int> &colors,int selected)
{
    queue<int> q;
    q.push(selected);
    colors[selected]=1;
    
    
    while(!q.empty())
    {
        int node =q.front();
        q.pop();
        for(auto it:adj[node]){
            if(colors[it]==-1){
                colors[it]=not colors[node];
                q.push(it);
            }
            else{
                if(colors[it]==colors[node])
                    return false;
            }
        }
    }
    return true;
}


	bool isBipartite(int n, vector<int>adj[]){
	    // Code here
	    
	    vector<int> colors(n,-1);
	    for(int i=0;i<n;i++)
	    {
	        if( colors[i]==-1)
	        {
	            if(not check(adj,colors,i))
	                return false;
	        }
	    }
	    
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends