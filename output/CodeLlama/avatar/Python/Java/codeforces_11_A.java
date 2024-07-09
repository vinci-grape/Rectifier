import java.util.Scanner;

public class codeforces_11_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int d = sc.nextInt();
        int[] x = new int[n];
        int m = 0;
        int q = 0;
        for (int i = 0; i < n; i++) {
            x[i] = sc.nextInt();
        }
        for (int a = 0; a < n - 1; a++) {
            if (x[a] >= x[a + 1]) {
                q = (x[a] - x[a + 1]) / d + 1;
                m = m + q;
                x[a + 1] = x[a + 1] + q * d;
            }
        }
        System.out.println(m);
    }
}