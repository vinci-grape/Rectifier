import java.util.*;

public class s101447419 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] v = new int[n];
        for (int i = 0; i < n; i++) {
            v[i] = scanner.nextInt();
        }
        int[] ve = new int[n / 2];
        int[] vo = new int[n / 2];
        for (int i = 0; i < n / 2; i++) {
            ve[i] = v[2 * i];
            vo[i] = v[2 * i + 1];
        }
        HashMap<Integer, Integer> ce = new HashMap<>();
        HashMap<Integer, Integer> co = new HashMap<>();
        for (int i : ve) {
            if (ce.containsKey(i)) {
                ce.put(i, ce.get(i) + 1);
            } else {
                ce.put(i, 1);
            }
        }
        for (int i : vo) {
            if (co.containsKey(i)) {
                co.put(i, co.get(i) + 1);
            } else {
                co.put(i, 1);
            }
        }
        int ans = n;
        if (ce.entrySet().iterator().next().getKey() != co.entrySet().iterator().next().getKey()) {
            ans = n - ce.entrySet().iterator().next().getValue() - co.entrySet().iterator().next().getValue();
        } else if (ce.size() == 1 && co.size() == 1) {
            ans = n - ce.entrySet().iterator().next().getValue();
        } else if (ce.size() == 1) {
            ans = n - ce.entrySet().iterator().next().getValue() - co.entrySet().iterator().next().getValue();
        } else if (co.size() == 1) {
            ans = n - ce.entrySet().iterator().next().getValue() - co.entrySet().iterator().next().getValue();
        } else {
            ans = Math.min(n - ce.entrySet().iterator().next().getValue() - co.entrySet().iterator().next().getValue(),
                    n - ce.entrySet().iterator().next().getValue() - co.entrySet().iterator().next().getValue());
        }
        System.out.println(ans);
    }
}