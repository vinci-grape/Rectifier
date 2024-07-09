import java.util.*;
public class atcoder_ABC166_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] p = new int[n + 1];
        int[] h = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            p[i] = i;
        }
        for (int i = 1; i <= n; i++) {
            h[i] = sc.nextInt();
        }
        HashMap<Integer, Integer> hp = new HashMap<>();
        for (int i = 1; i <= n; i++) {
            hp.put(p[i], h[i]);
        }
        HashMap<Integer, ArrayList<Integer>> path = new HashMap<>();
        for (int i = 1; i <= n; i++) {
            path.put(i, new ArrayList<>());
        }
        for (int i = 0; i < m; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            path.get(a).add(b);
            path.get(b).add(a);
        }
        int c = 0;
        for (int i : path.keySet()) {
            int f = 0;
            for (int j : path.get(i)) {
                if (hp.get(i) <= hp.get(j)) {
                    f = 1;
                    break;
                }
            }
            if (f == 0) {
                c++;
            }
        }
        System.out.println(c);
    }
}