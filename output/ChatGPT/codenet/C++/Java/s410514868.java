import java.util.Scanner;

public class s410514868 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        String s = scanner.next();

        char L = s.charAt(0);
        long ans = 0;
        long ans2 = 0;
        int cnt = 0;
        for (int i = 1; i < n; i++) {
            if (L == s.charAt(i)) {
                cnt++;
            } else {
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