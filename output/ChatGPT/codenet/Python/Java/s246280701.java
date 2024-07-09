import java.util.Scanner;

public class s246280701 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] x = new int[n];
        for (int i = 0; i < n; i++) {
            x[i] = scanner.nextInt();
        }
        int ans = (int) Math.pow(10, 10);
        for (int i = 0; i < 101; i++) {
            int[] tmp = new int[n];
            for (int j = 0; j < n; j++) {
                tmp[j] = (int) Math.pow(i - x[j], 2);
            }
            int sum = 0;
            for (int j = 0; j < n; j++) {
                sum += tmp[j];
            }
            if (sum < ans) {
                ans = sum;
            }
        }
        System.out.println(ans);
    }
}