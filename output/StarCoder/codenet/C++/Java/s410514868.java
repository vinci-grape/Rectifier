import java.util.*;
public class s410514868 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        String s = sc.next();
        int L = s.charAt(0);
        int cnt = 0;
        for (int i = 1; i < n; i++) {
            if (L == s.charAt(i))
                cnt++;
            else {
                L = s.charAt(i);
                cnt = 0;
            }
        }
        System.out.println(cnt + Math.min(2 * k, n - cnt));
    }
}