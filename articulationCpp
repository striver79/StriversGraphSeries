import java.util.*; 

class Main
{

	private void dfs(int node, int parent, int vis[], int tin[], int low[], ArrayList<ArrayList<Integer>> adj, int timer, int isArticulation[]) {
		vis[node] = 1; 
		tin[node] = low[node] = timer++; 
		int child = 0; 
		for(Integer it: adj.get(node)) {
			if(it == parent) continue; 

			if(vis[it] == 0) {
				dfs(it, node, vis, tin, low, adj, timer, isArticulation); 
				low[node] = Math.min(low[node], low[it]); 

				if(low[it] >= tin[node] && parent != -1) {
					isArticulation[node] = 1;  
				}
				child++; 
			} else {
				low[node] = Math.min(low[node], tin[it]); 
			}
		}
		if(parent != -1 && child > 1) isArticulation[node] = 1;  
	}
    void printBridges(ArrayList<ArrayList<Integer>> adj, int n)
    {
        int vis[] = new int[n]; 
        int tin[] = new int[n];
        int low[] = new int[n]; 
        
        int isArticulation[] = new int[n];

        int timer = 0; 
        for(int i = 0;i<n;i++) {
        	if(vis[i] == 0) {
        		dfs(i, -1, vis, tin, low, adj, timer, isArticulation); 
        	}
        }
        
        for(int i = 0;i<n;i++) {
            if(isArticulation[i] == 1) System.out.println(i); 
        }
    }
    public static void main(String args[])
    {
        int n = 5;
        ArrayList<ArrayList<Integer> > adj = new ArrayList<ArrayList<Integer> >();
		
		for (int i = 0; i < n; i++) 
			adj.add(new ArrayList<Integer>());
			
		adj.get(0).add(1);
		adj.get(1).add(0);

		adj.get(0).add(2);
		adj.get(2).add(0);

		adj.get(1).add(2);
		adj.get(2).add(1);

		adj.get(1).add(3);
		adj.get(3).add(1);

		adj.get(3).add(4);
		adj.get(4).add(3);
			
		Main obj = new Main(); 
		obj.printBridges(adj, n); 
		
    }
}
