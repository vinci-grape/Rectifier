import java.util.Scanner;

public class s289483518 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int[][] ope = new int[m][2];
        for (int i = 0; i < m; i++) {
            ope[i][0] = sc.nextInt();
            ope[i][1] = sc.nextInt();
        }
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] < ope[j][1]) {
                a[i] = ope[j][1];
                ope[j][0]--;
                if (ope[j][0] == 0) {
                    j++;
                    if (j == m) {
                        break;
                    }
                }
            } else {
                break;
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
        System.out.println(sum);
    }
}