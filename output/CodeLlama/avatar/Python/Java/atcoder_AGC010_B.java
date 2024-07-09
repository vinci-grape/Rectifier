import java.util.*;

public class atcoder_AGC010_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
        if (sum % (n * (n + 1) / 2)) {
            System.out.println("NO");
        } else {
            int k = sum / (n * (n + 1) / 2);
            a[n] = a[0];
            int[] b = new int[n];
            for (int i = 0; i < n; i++) {
                b[i] = (k - a[i + 1] + a[i]) % n;
            }
            int sum1 = 0;
            for (int i = 0; i < n; i++) {
                sum1 += b[i];
            }
            if (sum1 != 0) {
                System.out.println("NO");
            } else {
                for (int i = 0; i < n; i++) {
                    if (b[i] < 0) {
                        System.out.println("NO");
                        break;
                    }
                }
                if (sum1 == 0) {
                    System.out.println("YES");
                }
            }
        }
    }
}