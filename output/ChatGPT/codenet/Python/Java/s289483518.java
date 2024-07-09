import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class s289483518 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        Arrays.sort(a);
        int[][] ope = new int[m][2];
        for (int i = 0; i < m; i++) {
            ope[i][0] = scanner.nextInt();
            ope[i][1] = scanner.nextInt();
        }
        Arrays.sort(ope, Comparator.comparingInt(o -> o[1]));
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] < ope[j][1]) {
                a[i] = ope[j][1];
                ope[j][0]--;
                if (ope[j][0] == 0) {
                    j++;
                    if (j == ope.length) {
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