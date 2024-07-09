import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class s908812767 {
    static Map<Integer, List<int[]>> V;
    static Map<Integer, Integer> color;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        V = new HashMap<>();
        color = new HashMap<>();

        for (int i = 1; i <= n; i++) {
            color.put(i, -1);
        }

        for (int i = 1; i < n; i++) {
            int u = scanner.nextInt();
            int v = scanner.nextInt();
            int w = scanner.nextInt();

            if (!V.containsKey(u)) {
                V.put(u, new ArrayList<>());
            }
            V.get(u).add(new int[]{v, w});

            if (!V.containsKey(v)) {
                V.put(v, new ArrayList<>());
            }
            V.get(v).add(new int[]{u, w});
        }

        while (true) {
            int i = 0;
            for (int j = 1; j <= n; j++) {
                if (color.get(j) == -1) {
                    i = j;
                    color.put(i, 0);
                    break;
                }
            }

            if (i == 0) {
                for (int j = 1; j <= n; j++) {
                    System.out.println(color.get(j));
                }
                break;
            } else {
                if (!dfs(i)) {
                    System.out.println("No");
                    break;
                }
            }
        }
    }

    public static boolean dfs(int i) {
        for (int[] vw : V.getOrDefault(i, new ArrayList<>())) {
            int v = vw[0];
            int w = vw[1];

            if (w % 2 == 0) {
                if (color.get(v) == -1) {
                    color.put(v, color.get(i));
                } else if (color.get(v) == color.get(i)) {
                    continue;
                } else if (color.get(v) != color.get(i)) {
                    return false;
                }
            } else {
                if (color.get(v) == -1) {
                    color.put(v, color.get(i) == 0 ? 1 : 0);
                } else if (color.get(v) == color.get(i)) {
                    return false;
                } else if (color.get(v) != color.get(i)) {
                    continue;
                }
            }

            if (!dfs(v)) {
                return false;
            }
        }
        return true;
    }
}