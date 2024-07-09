import java.util.*;
import java.io.*;

public class s908812767 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Map<Integer, List<int[]>> V = new HashMap<>();
        int[] color = new int[n + 1];
        for (int i = 1; i < n; i++) {
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
        for (int i = 1; i < n + 1; i++) {
            color[i] = -1;
        }
        while (true) {
            int i = 0;
            for (int j = 1; j < n + 1; j++) {
                if (color[j] == -1) {
                    i = j;
                    color[i] = 0;
                    break;
                }
            }
            if (i == 0) {
                for (int j = 1; j < n + 1; j++) {
                    System.out.println(color[j]);
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
        for (int[] vw : V.get(i)) {
            if (vw[1] % 2 == 0) {
                if (color[vw[0]] == -1) {
                    color[vw[0]] = color[i];
                } else if (color[vw[0]] == color[i]) {
                    continue;
                } else if (color[vw[0]] != color[i]) {
                    return false;
                }
            } else {
                if (color[vw[0]] == -1) {
                    color[vw[0]] = 0;
                    if (color[i] == 0) {
                        color[vw[0]] = 1;
                    }
                } else if (color[vw[0]] == color[i]) {
                    return false;
                } else if (color[vw[0]] != color[i]) {
                    continue;
                }
            }
            if (!dfs(vw[0])) {
                return false;
            }
        }
        return true;
    }
}