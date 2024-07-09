import java.util.*;
public class atcoder_ABC128_C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[][] li = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                li[i][j] = sc.nextInt();
            }
        }
        int[] p = new int[m];
        for (int i = 0; i < m; i++) {
            p[i] = sc.nextInt();
        }
        Set<Integer> q = new HashSet<>();
        for (int i = 0; i < m; i++) {
            for (int j = 1; j < n; j++) {
                q.add(li[i][j]);
            }
        }
        Set<Integer> r = new HashSet<>();
        for (int i = 1; i <= n; i++) {
            r.add(i);
        }
        Set<Integer> v = new HashSet<>(r);
        v.removeAll(q);
        long ans = 0;
        for (int i = 0; i <= q.size(); i++) {
            for (int[] s : new Combinations(q, i)) {
                for (int j = 0; j < m; j++) {
                    Set<Integer> t = new HashSet<>(Arrays.asList(li[j]));
                    t.remove(0);
                    if (s.length % 2 != p[j]) {
                        break;
                    }
                }
                ans += Math.pow(2, v.size());
            }
        }
        System.out.println(ans);
    }
}

class Combinations {
    private final int[] set;
    private final int k;
    private final int[] data;
    private final int[] indexes;
    private int index;
    public Combinations(Set<Integer> set, int k) {
        this.set = new int[set.size()];
        int i = 0;
        for (int x : set) {
            this.set[i++] = x;
        }
        Arrays.sort(this.set);
        this.k = k;
        data = new int[k];
        indexes = new int[k];
        index = 0;
    }
    public int[] next() {
        if (index == 0) {
            for (int i = 0; i < k; i++) {
                indexes[i] = i;
                data[i] = set[i];
            }
            index++;
            return data;
        }
        int i = k - 1;
        while (i >= 0 && indexes[i] == set.length - k + i) {
            i--;
        }
        if (i < 0) {
            return null;
        }
        indexes[i]++;
        for (int j = i + 1; j < k; j++) {
            indexes[j] = indexes[j - 1] + 1;
            data[j] = set[indexes[j]];
        }
        index++;
        return data;
    }
}