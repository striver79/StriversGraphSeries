#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool checkCycle(int node, vector<int> adj[], int vis[], int dfsVis[]) {
        vis[node] = 1; 
        dfsVis[node] = 1; 
        for(auto it : adj[node]) {
            if(!vis[it]) {
                if(checkCycle(it, adj, vis, dfsVis)) return true;
            } else if(dfsVis[it]) {
                return true; 
            }
        }
        dfsVis[node] = 0; 
        return false;
    }
public:
	bool isCyclic(int N, vector<int> adj[]) {
	   int vis[N], dfsVis[N]; 
	   memset(vis, 0, sizeof vis); 
	   memset(dfsVis, 0, sizeof dfsVis); 
	   
	   for(int i = 0;i<N;i++) {
	       if(!vis[i]) {
	           // cout << i << endl; 
	           if(checkCycle(i, adj, vis, dfsVis)) {
	               return true; 
	           }
	       }
	   }
	   return false; 
	}
};




int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
