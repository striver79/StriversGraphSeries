import java.util.*; 

class Main
{
	boolean bfsCheck(ArrayList<ArrayList<Integer>> adj, int node, int color[]) {
		Queue<Integer> q = new LinkedList<>();
		q.add(node); 
		color[node] = 1; 
		while(!q.isEmpty()) {
			Integer nde = q.poll(); 

			for(Integer it: adj.get(nde)) {
				if(color[it] == -1) {
					color[it] = 1 - color[nde]; 
					q.add(it); 
				}
				else if(color[it] == color[nde]) {
					return false; 
				}
			}
		}
		return true; 
	}


    boolean checkBipartite(ArrayList<ArrayList<Integer>> adj, int n)
    {
        int color[] = new int[n];
        for(int i = 0;i<n;i++) {
        	color[i] = -1; 
        }
        for(int i = 0;i<n;i++) {
        	if(color[i] == -1) {
        		if(!bfsCheck(adj, i, color)) {
        			return false; 
        		}
        	}
        }
        return true; 
    }
    public static void main(String args[])
    {
        int n = 7;
        ArrayList<ArrayList<Integer> > adj = new ArrayList<ArrayList<Integer> >();
		
		for (int i = 0; i < n; i++) 
			adj.add(new ArrayList<Integer>());
			
		adj.get(0).add(1);
		adj.get(1).add(0);

		adj.get(1).add(2);
		adj.get(2).add(1);

		adj.get(2).add(3);
		adj.get(3).add(2);

		adj.get(4).add(3);
		adj.get(3).add(4);

		adj.get(4).add(5);
		adj.get(5).add(4);

		adj.get(4).add(6);
		adj.get(6).add(4);

		adj.get(1).add(6);
		adj.get(6).add(1);
		
			
		Main obj = new Main(); 
		if(obj.checkBipartite(adj, n) == true) System.out.println("Yes Bipartite"); 
		else System.out.println("Not Bipartite"); 
		
    }
}
