import java.util.*;

public class s526060174 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] x = new int[m + 1];
        for (int i = 0; i < n; i++) {
            int k = in.nextInt();
            for (int j = 0; j < k; j++) {
                int a = in.nextInt();
                x[a]++;
            }
        }
        int ans = 0;
        for (int i = 1; i <= m; i++) {
            if (x[i] == n) {
                ans++;
            }
        }
        System.out.println(ans);
    }
}