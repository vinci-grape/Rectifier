import java.util.*;

public class s314711832 {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int V = sc.nextInt();
    int E = sc.nextInt();
    int r = sc.nextInt();

    int[] distances = new int[V];
    Arrays.fill(distances, Integer.MAX_VALUE);
    distances[r] = 0;

    for (int i = 0; i < E; i++) {
      int source = sc.nextInt();
      int target = sc.nextInt();
      int distance = sc.nextInt();
      distances[target] = Math.min(distances[target], distances[source] + distance);
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