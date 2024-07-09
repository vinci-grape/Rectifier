import java.util.*;
public class atcoder_AGC002_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] w = new int[n];
        int[] r = new int[n];
        for (int i = 0; i < n; i++) {
            w[i] = sc.nextInt();
            r[i] = sc.nextInt();
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (w[i] == 1 && r[i] == 1) ans++;
        }
        System.out.println(ans);
    }
}