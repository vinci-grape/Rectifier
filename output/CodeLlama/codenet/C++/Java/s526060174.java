import java.util.Scanner;

public class s526060174 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] x = new int[31];
        for (int i = 0; i < n; i++) {
            int k = sc.nextInt();
            for (int j = 0; j < k; j++) {
                int a = sc.nextInt();
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