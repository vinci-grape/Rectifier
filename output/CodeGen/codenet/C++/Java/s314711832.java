import java.util.Scanner;
import java.util.Vector;
import java.util.Arrays;

public class s314711832 {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int V, E, r;
    V = in.nextInt();
    E = in.nextInt();
    r = in.nextInt();
    
    Vector<Edge> edges = new Vector<Edge>();
    
    for (int i = 0; i < E; i++) {
      int source, target, distance;
      source = in.nextInt();
      target = in.nextInt();
      distance = in.nextInt();
      Edge edge = new Edge(source, target, distance);
      edges.add(edge);
    }
    
    //initialize distances array
    int[] distances = new int[V];
    Arrays.fill(distances, INF);
    distances[r] = 0;
    
    for (int i = 1; i < V; i++) {
      for (int j=0; j< V; j++) {
	distances[j] = MIN(distances[j], distances[j]);
      }
      
      for (Edge edge : edges) {
	distances[edge.target] = MIN(distances[edge.source] + edge.weight, distances[edge.target]);
      }
      
      boolean same = true;
      for (int j=0; j< V; j++) {
	if (distances[j]!= distances[j]) {
	  same = false;
	  break;
	}
      }
      
      if (same) break;
    }
    
    for (int i = 0; i < V; i++) {
      if (distances[i] == INF) {
	System.out.println("INF");
      } else {
	System.out.println(distances[i]);
      }
    }
  }
}

class Edge {
  int source;
  int target;
  int weight;
  
  public Edge(int source, int target, int weight) {
    this.source = source;
    this.target = target;
    this.weight = weight;
  }
}