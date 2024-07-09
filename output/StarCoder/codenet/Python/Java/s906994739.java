import java.util.*;

public class s906994739 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] F = new int[n][10];
        int[][] P = new int[n][10];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 10; j++) {
                F[i][j] = sc.nextInt();
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 10; j++) {
                P[i][j] = sc.nextInt();
            }
        }
        int ans = -1000000000;
        for (int i = 0; i < 1 << 10; i++) {
            int[] lst = new int[n];
            for (int j = 0; j < 10; j++) {
                if (((i >> j) & 1) == 1) {
                    for (int k = 0; k < n; k++) {
                        lst[k] += F[k][j];
                    }
                }
            }
            int tmp = 0;
            for (int k = 0; k < n; k++) {
                tmp += P[k][lst[k]];
            }
            ans = Math.max(ans, tmp);
        }
        System.out.println(ans);
    }

}