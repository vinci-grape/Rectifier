import java.util.*;

public class s733189960 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Map<String, Integer> sdic = new HashMap<>();
        for (int i = 0; i < n; i++) {
            String s = sc.next();
            char[] c = s.toCharArray();
            Arrays.sort(c);
            s = new String(c);
            if (sdic.containsKey(s)) {
                sdic.put(s, sdic.get(s) + 1);
            } else {
                sdic.put(s, 1);
            }
        }
        int ans = 0;
        for (String k : sdic.keySet()) {
            ans += sdic.get(k) * (sdic.get(k) - 1) / 2;
        }
        System.out.println(ans);
    }

}