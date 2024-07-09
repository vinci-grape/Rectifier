import java.util.*;
public class atcoder_ABC166_C {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, m;
        n = sc.nextInt();
        m = sc.nextInt();
        int[] p = new int[n + 1];
        int[] h = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            p[i] = i;
            h[i] = sc.nextInt();
        }
        Map<Integer, List<Integer>> path = new HashMap<Integer, List<Integer>>();
        for (int i = 0; i < m; i++) {
            int a, b;
            a = sc.nextInt();
            b = sc.nextInt();
            if (!path.containsKey(a)) {
                path.put(a, new ArrayList<Integer>());
            }
            path.get(a).add(b);
            if (!path.containsKey(b)) {
                path.put(b, new ArrayList<Integer>());
            }
            path.get(b).add(a);
        }
        int c = 0;
        for (int i = 1; i <= n; i++) {
            boolean f = false;
            for (int j : path.get(i)) {
                if (h[i] <= h[j]) {
                    f = true;
                    break;
                }
            }
            if (!f) {
                c++;
            }
        }
        System.out.println(c);
    }
}