import java.util.Scanner;

public class codeforces_11_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int d = scanner.nextInt();
        int[] x = new int[n];
        int m = 0;
        int q = 0;
        for (int i = 0; i < n; i++) {
            x[i] = scanner.nextInt();
        }
        System.out.println(findMinDifference(x));
    }
    public static int findMinDifference(int[] timePoints) {
        int n = timePoints.length;
        int[] diff = new int[n];
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < n - 1; i++) {
            diff[i] = timePoints[i] - timePoints[i + 1];
            min = Math.min(min, diff[i]);
        }
        return min;
    }
}