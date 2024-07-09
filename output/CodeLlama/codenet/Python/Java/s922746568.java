import java.util.Scanner;

public class s922746568 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next();
        int r_cnt = 0;
        int g_cnt = 0;
        int b_cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == 'R') {
                r_cnt++;
            } else if (s.charAt(i) == 'G') {
                g_cnt++;
            } else if (s.charAt(i) == 'B') {
                b_cnt++;
            }
        }
        long ans = r_cnt * g_cnt * b_cnt;
        for (int i = 0; i < n; i++) {
            for (int d = 0; d < n; d++) {
                int j = i + d;
                int k = j + d;
                if (k >= n) {
                    break;
                }
                if (s.charAt(i) != s.charAt(j) && s.charAt(j) != s.charAt(k) && s.charAt(k) != s.charAt(i)) {
                    ans--;
                }
            }
        }
        System.out.println(ans);
    }
}