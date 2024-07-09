import java.util.*;

public class s246280701 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] x = new int[n];
        for (int i = 0; i < n; i++) {
            x[i] = sc.nextInt();
        }
        int ans = 1000000000;
        for (int i = 0; i < 101; i++) {
            int tmp = 0;
            for (int j = 0; j < n; j++) {
                tmp += (i - x[j]) * (i - x[j]);
            }
            if (tmp < ans) {
                ans = tmp;
            }
        }
        System.out.println(ans);
    }
}