import java.util.*; 

class Main
{
	private void dfs(int node, Stack<Integer> st, ArrayList<ArrayList<Integer>> adj, int vis[]) {
		vis[node] = 1;
		for(Integer it : adj.get(node)) {
			if(vis[it] == 0) {
				dfs(it, st, adj, vis); 
			}
		}

		st.push(node); 
	}

	private void revDfs(int node, ArrayList<ArrayList<Integer>> transpose, int vis[]) {
		vis[node] = 1;
		System.out.print(node + " "); 
		for(Integer it : transpose.get(node)) {
			if(vis[it] == 0) {
				revDfs(it, transpose, vis); 
			}
		}
	}

    void kosaRaju(ArrayList<ArrayList<Integer>> adj, int n)
    {
        int vis[] = new int[n]; 
        Stack<Integer> st = new Stack<Integer>(); 
        for(int i = 0;i<n;i++) {
        	if(vis[i] == 0) {
        		dfs(i, st, adj, vis); 
        	}
        }

        ArrayList<ArrayList<Integer> > transpose = new ArrayList<ArrayList<Integer> >();
		
		for (int i = 0; i < n; i++) 
			transpose.add(new ArrayList<Integer>());

		for(int i = 0;i<n;i++) {
			vis[i] = 0; 
			for(Integer it: adj.get(i)) {
				transpose.get(it).add(i); 
			}
		}

		while(st.size() > 0) {
			int node = st.peek(); 
			st.pop(); 
			if(vis[node] == 0) {
				System.out.print("SCC: "); 
				revDfs(node, transpose, vis);
				System.out.println(); 
			}
		}

    }
    public static void main(String args[])
    {
        int n = 5;
        ArrayList<ArrayList<Integer> > adj = new ArrayList<ArrayList<Integer> >();
		
		for (int i = 0; i < n; i++) 
			adj.add(new ArrayList<Integer>());
			
		adj.get(0).add(1);
		adj.get(1).add(2);
		adj.get(2).add(0);
		adj.get(1).add(3);
		adj.get(3).add(4);

			
		Main obj = new Main(); 
		obj.kosaRaju(adj, n); 
		
    }
}

/*
5 5 
0 1 
1 2 
2 0 
1 3 
3 4 
*/
