import java.util.*;
public class s232279435 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int x = 0;
            int y = 0;
            for (int j = 0; j < i; j++) {
                if (s.charAt(j) == s.charAt(i)) {
                    x++;
                }
            }
            for (int j = i + 1; j < n; j++) {
                if (s.charAt(j) == s.charAt(i)) {
                    y++;
                }
            }
            ans = Math.max(ans, x + y);
        }
        System.out.println(ans);
    }
}