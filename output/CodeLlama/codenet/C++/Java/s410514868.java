import java.util.Scanner;

public class s410514868 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long k = sc.nextLong();
        String s = sc.next();
        long L = s.charAt(0);
        long cnt = 0;
        long ans = 0;
        long ans2 = 0;
        for (int i = 1; i < n; i++) {
            if (L == s.charAt(i)) cnt++;
            else {
                L = s.charAt(i);
                ans += cnt;
                ans2++;
                cnt = 0;
            }
        }
        ans += cnt;
        ans2++;
        System.out.println(ans + Math.min(2 * k, ans2 - 1));
    }
}