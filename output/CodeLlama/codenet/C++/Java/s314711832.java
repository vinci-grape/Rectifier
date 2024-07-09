import java.util.Scanner;
import java.util.Vector;

public class s314711832 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int V = sc.nextInt();
    int E = sc.nextInt();
    int r = sc.nextInt();

    Vector<Edge> edges = new Vector<Edge>();

    for (int i = 0; i < E; i++) {
      int source = sc.nextInt();
      int target = sc.nextInt();
      int weight = sc.nextInt();
      Edge new_edge = new Edge(source, target, weight);
      edges.add(new_edge);
    }

    int[] distances = new int[V];
    int[] prev_distances = new int[V];

    for (int i = 0; i < V; i++) {
      distances[i] = Integer.MAX_VALUE;
    }

    distances[r] = 0;

    for (int i = 1; i < V; i++) {
      for (int j = 0; j < V; j++) {
        prev_distances[j] = distances[j];
      }

      for (int j = 0; j < E; j++) {
        Edge edge = edges.get(j);
        distances[edge.target] = Math.min(distances[edge.source] + edge.weight, distances[edge.target]);
      }

      boolean same = true;
      for (int j = 0; j < V; j++) {
        if (distances[j] != prev_distances[j]) {
          same = false;
          break;
        }
      }

      if (same) break;
    }

    for (int i = 0; i < V; i++) {
      if (distances[i] == Integer.MAX_VALUE) {
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