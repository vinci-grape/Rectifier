#ABC111C
import java.util.*;

public class s101447419 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] v = new int[n];
        for (int i = 0; i < n; i++) {
            v[i] = in.nextInt();
        }
        int[] ve = new int[n/2];
        int[] vo = new int[n/2];
        for (int i = 0; i < n/2; i++) {
            ve[i] = v[2*i];
            vo[i] = v[2*i+1];
        }
        Map<Integer, Integer> ce = new HashMap<>();
        Map<Integer, Integer> co = new HashMap<>();
        for (int i = 0; i < n/2; i++) {
            ce.put(ve[i], 1);
            co.put(vo[i], 1);
        }
        int ans = n;
        if (ce.keySet().size()!= co.keySet().size()) {
            ans = n - ce.keySet().size() - co.keySet().size();
        } else if (ce.keySet().size() == 1) {
            ans = n - ce.keySet().size();
        } else if (co.keySet().size() == 1) {
            ans = n - co.keySet().size();
        } else {
            ans = Math.min(n - ce.keySet().size(), n - co.keySet().size());
        }
        System.out.println(ans);
    }
}