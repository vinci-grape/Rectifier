import java.util.*;

public class s908812767 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Map<Integer, List<int[]>> V = new HashMap<>();
        Map<Integer, Integer> color = new HashMap<>();
        for (int i = 0; i < n; i++) {
            int u = sc.nextInt();
            int v = sc.nextInt();
            int w = sc.nextInt();
            if (!V.containsKey(u)) {
                V.put(u, new ArrayList<>());
            }
            V.get(u).add(new int[]{v, w});
            if (!V.containsKey(v)) {
                V.put(v, new ArrayList<>());
            }
            V.get(v).add(new int[]{u, w});
        }
        for (int i = 1; i <= n; i++) {
            color.put(i, -1);
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
                if (!dfs(i, V, color)) {
                    System.out.println("No");
                    break;
                }
            }
        }
    }

    public static boolean dfs(int i, Map<Integer, List<int[]>> V, Map<Integer, Integer> color) {
        for (int[] vw : V.get(i)) {
            int v = vw[0];
            int w = vw[1];
            if ((w % 2) == 0) {
                if (color.get(v) == -1) {
                    color.put(v, color.get(i));
                } else if (color.get(v) == color.get(i)) {
                    continue;
                } else {
                    return false;
                }
            } else {
                if (color.get(v) == -1) {
                    color.put(v, 0);
                } else if (color.get(v) == color.get(i)) {
                    return false;
                } else {
                    continue;
                }
            }
            if (!dfs(v, V, color)) {
                return false;
            }
        }
        return true;
    }
}