import java.util.Scanner;

public class codeforces_456_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] m = new int[n][2];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                m[i][j] = sc.nextInt();
            }
        }
        int[][] m1 = new int[n][2];
        for (int i = 0; i < n; i++) {
            m1[i] = m[i];
        }
        Arrays.sort(m1, (a, b) -> (b[1] - a[1]));
        int[] a = m1[0];
        for (int i = 1; i < n; i++) {
            if (m1[i][1] > a[1]) {
                System.out.println("Happy Alex");
                break;
            }
            a = m1[i];
        }
        if (i == n) {
            System.out.println("Poor Alex");
        }
    }
}