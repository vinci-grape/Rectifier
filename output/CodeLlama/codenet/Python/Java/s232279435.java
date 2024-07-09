import java.util.*;

public class s232279435 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();

        int ans = 0;

        for (int i = 0; i < n; i++) {
            HashSet<Character> x = new HashSet<>();
            HashSet<Character> y = new HashSet<>();

            for (int j = 0; j <= i; j++) {
                x.add(s.charAt(j));
            }

            for (int j = i + 1; j < n; j++) {
                y.add(s.charAt(j));
            }

            int z = 0;
            for (Character w : x) {
                if (y.contains(w)) {
                    z++;
                }
            }
            if (z > ans) {
                ans = z;
            }
        }
        System.out.println(ans);
    }
}