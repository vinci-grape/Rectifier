import java.util.*;

public class atcoder_ABC128_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        List<List<Integer>> li = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            List<Integer> sublist = new ArrayList<>();
            int k = scanner.nextInt();
            for (int j = 0; j < k; j++) {
                sublist.add(scanner.nextInt());
            }
            li.add(sublist);
        }
        int[] p = new int[n];
        for (int i = 0; i < n; i++) {
            p[i] = scanner.nextInt();
        }
        Set<Integer> q = new HashSet<>();
        for (List<Integer> sublist : li) {
            q.addAll(sublist);
        }
        Set<Integer> r = new HashSet<>();
        for (int i = 1; i <= n; i++) {
            r.add(i);
        }
        Set<Integer> v = new HashSet<>(r);
        v.removeAll(q);
        int ans = 0;
        for (int i = 0; i <= q.size(); i++) {
            List<Set<Integer>> combinations = new ArrayList<>();
            generateCombinations(q, i, new HashSet<>(), combinations);
            for (Set<Integer> s : combinations) {
                boolean valid = true;
                for (int j = 0; j < li.size(); j++) {
                    Set<Integer> u = new HashSet<>(li.get(j));
                    if (Collections.disjoint(u, s)) {
                        valid = false;
                        break;
                    }
                }
                if (valid) {
                    ans += Math.pow(2, v.size());
                }
            }
        }
        System.out.println(ans);
    }

    private static void generateCombinations(Set<Integer> set, int k, Set<Integer> current, List<Set<Integer>> combinations) {
        if (k == 0) {
            combinations.add(new HashSet<>(current));
            return;
        }
        for (int num : set) {
            if (!current.contains(num)) {
                current.add(num);
                generateCombinations(set, k - 1, current, combinations);
                current.remove(num);
            }
        }
    }
}