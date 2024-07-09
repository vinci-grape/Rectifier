import java.util.Scanner;

public class s788730767 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[50];
        int p = sc.nextInt();
        int b = 0, c = 0;

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
            if (a[i] % 2 == 0) {
                b++;
            } else {
                c++;
            }
        }

        long bsum = 0, csum = 0;
        bsum = (long) Math.pow(2, b);

        if (p == 0) {
            for (int i = 0; i <= c; i++) {
                if (i % 2 == 0) {
                    csum += nCr(c, i);
                }
            }
        } else {
            for (int i = 0; i <= c; i++) {
                if (i % 2 == 1) {
                    csum += nCr(c, i);
                }
            }
        }

        long ans = bsum * csum;
        System.out.println(ans);
    }

    public static long nCr(int n, int r) {
        long res = 1;
        for (int i = 0; i < r; i++) {
            res *= (n - i);
        }

        return res;
    }
}