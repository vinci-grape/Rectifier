import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class s314711832 {
    static class Edge {
        int source;
        int target;
        int weight;

        Edge(int source, int target, int weight) {
            this.source = source;
            this.target = target;
            this.weight = weight;
        }
    }

    static List<Edge> edges;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int V = scanner.nextInt();
        int E = scanner.nextInt();
        int r = scanner.nextInt();

        edges = new ArrayList<>();

        for (int i = 0; i < E; i++) {
            int source = scanner.nextInt();
            int target = scanner.nextInt();
            int weight = scanner.nextInt();
            Edge newEdge = new Edge(source, target, weight);
            edges.add(newEdge);
        }

        int[] distances = new int[V];
        Arrays.fill(distances, Integer.MAX_VALUE);
        distances[r] = 0;

        for (int i = 1; i < V; i++) {
            int[] prevDistances = Arrays.copyOf(distances, V);

            for (Edge edge : edges) {
                distances[edge.target] = Math.min(distances[edge.source] + edge.weight, distances[edge.target]);
            }

            boolean same = true;
            for (int j = 0; j < V; j++) {
                if (distances[j] != prevDistances[j]) {
                    same = false;
                    break;
                }
            }

            if (same) {
                break;
            }
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